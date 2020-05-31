//
//  main.c
//  R06_Quiz13
//
//  Created by Dj Hinton on 4/4/17.
//  Copyright © 2017 Dj Hinton. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
   
    char again = 'y';
    int temp = 0, reruns;
    FILE *outfpt;
    
        
        printf("Quiz 13\nGroup R06\nDJ Hinton, Jocelyn Hawk, Claire Sattler");
        
        printf("\nThe purpose of this program is to find the sum, average, and standard deviation of a series of numbers.\n");
        
        do {
            
            int values, i, j, k;
            
            double data[10], datasum=0, average, stdsum=0, std = 0.0;
            
            
            printf("Please enter the number of values you wish to enter: \n");
            
            scanf("%d", &values);
            
            temp = temp + 1;
            
            while (values > 10 || values < 0) {
                
                printf("You must enter a value between 0 and 10!!!!\n");
                
                printf("Please enter the number of values you wish to enter: \n");
                
                scanf("%d", &values);
                
            }
            
            for (i = 0;i < values;i++) {
                
                printf("enter value for item number %d\n", i + 1);
                
                scanf("%lf", &data[i]);
                
            }
            
            //find the sum
            
            for (j = 0;j < values;j++) {
                
                datasum = datasum + data[j];
                
            }
            
            printf("The sum of the %d values is %lf\n", values, datasum);
            
            //find the average
            
            average = datasum / values;
            
            printf("The average of the data is %lf\n", average);
            
            for (k = 0;k < values;k++) {
                
                stdsum = stdsum + pow(data[k] - average, 2);
                
                std = sqrt(stdsum / (values - 1));
                
            }
            
            printf("The standard deviation of the data is %lf\n", std);
            
            //print results to file
            
            outfpt = fopen("out.txt", "w");
            
            fprintf(outfpt, "The sum of the %d values is %lf\n", values, datasum);
            
            fprintf(outfpt, "The average of the data is %lf\n", average);
            
            fprintf(outfpt, "The standard deviation of the data is %lf\n", std);
            
            fclose(outfpt);
            
            printf("Would you like to do this again?(y/n)");
            
            scanf(" %c", &again);
            
        } while (again == 'y');
    
    reruns = temp;
    
    if(reruns % 2 == 0){
        
        printf("\nYou ran the program %d times. You are Very Even.",reruns);
    
    }
    
    else{
        
        printf("\nYou ran the program %d times. You are the oddest odd.",reruns);
        
    }
        
        printf("\n\n\n\n\n");
        
        system("pause");
        
    }
