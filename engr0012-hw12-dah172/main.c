//
//  main.c
//  HW12_dah172
//
//  Created by Clair Sattler, Jocelyn Hawk, Dj Hinton on 3/24/17.
//  Copyright © 2017 All rights reserved.
//
//  Engineering 0012 T,H 2:00-4:00
//  Vidic
//
//  due: 3/28/17
//
//
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Pi 3.1415

int main() {
    
    //defines the variables
    int calcType;
    double sumArgument = 0, sumArgument1 = 0, sumArgument2 = 0;
    double i, t, V, term, E, t1, t2, V1, V2, deltaV;
    int n, termNumber = 0;
    int again = 1, doagain = 1;
    
    //do-while loop for re-running the whole program
    do
    {
    printf("\n\nWhich calculation would you like to do?\n");
    printf("Enter (1) to calculate voltage at a specific time.\n");
    printf("Enter (2) to calculate something else (not really sure what.)\n");
    printf("Enter (3) to calculate the change in voltage from t1 to t2.\n: ");
    scanf("%d",&calcType);
    
    
    //checking for user input error
    while(calcType != 1 && calcType != 2 && calcType != 3)
    {
        printf("\nPlease, enter values (1), (2), or (3)\n: ");
        scanf("%d",&calcType);
    }
    
    
    
    //switch user input (which calculation is chosen
    switch(calcType)
    {
        
        
        
        
            
            
            
        //calculation 1
        case 1:
            do
            {
            printf("\nHow many terms would you like to go through?: ");
            scanf("%d",&n);
            printf("Input value for time between -3 and 3: ");
            scanf("%lf",&t);
            for (i=1;i<=n;i++)
            {
                sumArgument = (1/pow(2*i-1,2)*cos(((2*i-1)*Pi*t)/3))+sumArgument;
            }
            V = (3/(float)2)-(12/(float)pow(Pi,2))*sumArgument;
            printf("This is the voltage with your specified conditions of t = %.2lf and n = %d:\n\n V = %lf\n\n",t,n,V);
            printf("Would you like to repeat the calculation with a different set of paramaters?\n");
            printf("1 = yes, 2 = no\n: ");
            scanf("%d",&again);
                
                
                //check for user input error
                while(again != 1 && again != 2)
                {
                    printf("\nPlease, enter values (1) or (2)\n: ");
                    scanf("%d",&again);
                }
                
            } while(again == 1); //case 1 loop ending
            break; //break out of switch-case
        
        
        
        
        
        
            
            
            
            
        //calculation 2
        case 2:
            do
            {
            printf("\nEnter a value for E (make it a small number as this will the be the value of the sequential term: ");
            scanf("%lf",&E);
            printf("Input value for time between -3 and 3: ");
            scanf("%lf",&t);
            for (i=1;;i++)
            {
                term = (1/pow(2*i-1,2)*cos(((2*i-1)*Pi*t)/3));
                if(term>=-E && term<=E)
                {
                    break;
                }
                sumArgument = term+sumArgument;
                ++termNumber;
            }
            V = (3/(float)2)-(12/(float)pow(Pi,2))*sumArgument;
            printf("This is the voltage with your specified conditions of t = %.2lf and E = %lf:\n\n V = %lf\nNumber of Terms: %d\n\n",t,E,V,termNumber);
            printf("Would you like to repeat the calculation with a different set of paramaters?\n");
            printf("1 = yes, 2 = no\n: ");
            scanf("%d",&again);
                
                
                //check for user input error
                while(again != 1 && again != 2)
                {
                    printf("\nPlease, enter values (1) or (2)\n: ");
                    scanf("%d",&again);
                }
                
                
            } while(again == 1); //case 2 loop ending
            break; //break out of switch-case
            
            
            
        
            
            
            
        
            
            
            
            
            
            
        //calculation 3
        case 3:
            do
            {
            printf("\nPlease enter a value for time 1: ");
            scanf("%lf",&t1);
            printf("Please enter a value for time 2 (ensure that this one is bigger than time 1): ");
            scanf("%lf",&t2);
            printf("define the number of terms in the series: ");
            scanf("%d",&n);
            for (i=1;i<=n;i++)
            {
                sumArgument1 = (1/pow(2*i-1,2)*cos(((2*i-1)*Pi*t1)/3))+sumArgument1;
                sumArgument2 = (1/pow(2*i-1,2)*cos(((2*i-1)*Pi*t2)/3))+sumArgument2;
            }
            V1 = (3/(float)2)-(12/(float)pow(Pi,2))*sumArgument1;
            V2 = (3/(float)2)-(12/(float)pow(Pi,2))*sumArgument2;
            deltaV = V2-V1;
            printf("\n\nUsing the defined number of terms specified by you to be %d\n",n);
            printf("The voltage at time = %lf is: %lf\n",t1,V1);
            printf("The voltage at time = %lf is: %lf\n",t2,V2);
            printf("The change in voltage is: %lf\n\n",deltaV);
                
            printf("Would you like to repeat the calculation with a different set of paramaters?\n");
            printf("1 = yes, 2 = no\n: ");
            scanf("%d",&again);
                
                
                //check for user input error
                while(again != 1 && again != 2)
                {
                    printf("\nPlease, enter values (1) or (2)\n: ");
                    scanf("%d",&again);
                }
                
                
            } while(again == 1); //case 3 loop ending
            break; //break out of switch-case
            
            
    
    
    
    
    } //switch-case ending
        
        
        
        
        
        
        
        //determins if user wants to re-run the program
        printf("\n\nWould you like to select a different type of calculation?\n");
        printf("1 = yes, 2 = no\n: ");
        scanf("%d",&doagain);
    
    } while(doagain == 1); //program loop ending
    
    
    
}
