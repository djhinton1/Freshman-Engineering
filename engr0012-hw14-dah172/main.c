//
//  main.c
//  HW14_R06
//
//  Created by Dj Hinton, Claire Sattler, Jocelyn Hawk on 4/4/17.
//
//  Copyright © 2017 All rights reserved.
//
//  Vidic
//
//  Script calculates various definitions of a specified shape.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define PI 3.1415

void function1(void);
int function2(void);
double function3(double, double, double, double, int, int);
double function4(double, double, double, int, int);
double function5(double);
void function6(int, int, int, double);

//variable definitions
int dimension;
int shape;
int property;
double radius = 0, length = 0, width = 0, depth = 0;
double calculation;
char again = 'y';



//main function
int main() {
   
    function1();
    
    do{
    dimension = function2();
    
    switch(dimension){
        case 2:{//two dimensional
            printf("\nWhich shape would you like to use: circle(1) or rectangle(2): ");
            scanf("%d",&shape);
            printf("\nWhat property of the shape would you like to calculate? area(1) perimeter(2): ");
            scanf("%d",&property);
            if(shape == 1){
                printf("\nWhat is the radius of the circle?: ");
                scanf("%lf",&radius);
            }
            else{
                printf("\nWhat is the length of the rectangle?: ");
                scanf("%lf",&length);
                printf("\nWhat is the width of the rectangle?: ");
                scanf("%lf",&width);
            }
            
            calculation = function4(radius, length, width, property, shape);
            break;
        }//case 2 end
        
        case 3:{//three dimensional
            printf("\nwhich shape would you like to use: sphere(1) or rectangular prism(2): ");
            scanf("%d",&shape);
            printf("\nWhat property of the shape would you like to calculate? surface area(1) volume(2): ");
            scanf("%d",&property);
            if(shape == 1){
                printf("\nWhat is the radius of the sphere?: ");
                scanf("%lf",&radius);
            }
            else{
                printf("\nWhat is the length of the prisim?: ");
                scanf("%lf",&length);
                printf("\nWhat is the width of the prisim?: ");
                scanf("%lf",&width);
                printf("\nWhat is the depth of the prisim?: ");
                scanf("%lf",&depth);
            }
            
            calculation = function3(radius, length, width, depth, property, shape);
            break;
        }//case 3 end
    }//switch-case end
    
    
        function6(dimension, shape, property, calculation);
    
        printf("\nWould you like to pick another shape? (y/n): ");
        scanf(" %c",&again);
    }while(again == 'y');
}//main function end








//function 1
/***************************************************/
void function1(){
    printf("\nThe program will find the area and perimeter of a two dimensional shape, or the volume and surface area of a three dimensional shape. This program was written by Dj Hinton, Claire Sattler, and Jocelyn Hawk.\n\n\n");
}//function1 end









//function 2
/***************************************************/
int function2(){
    int dimension;
    printf("\nWould you like a (2) or (3) dimensional shape?: ");
    scanf("%d",&dimension);
    return(dimension);
}//function2 end











//function 3: three deminisional shape
/***************************************************/
double function3(double radius, double length, double width, double depth, int property, int shape){
    
    double calculation = 0.0;
    
    switch(property){
        case 1:{//surface area
            if(shape == 1){//sphere
                calculation = 4 * PI * pow(radius,2);
            }
            else{//rectangular prism
                calculation = 2 * (length * width) + 2 * (length * depth) + 2 * (depth * width);
            }
            break;
        }//case 1 end
            
        case 2:{//volume
            if(shape == 1){//sphere
                calculation = (4/(float)3) * PI * pow(radius,3);
            }
            else{//rectangular prism
                calculation = length * width * depth;
            }
            break;
        }//case 2 end
    }//switch-case ending
    
    return(calculation);
    
}//function3 end













//function 4: two dimensional shape
/***************************************************/
double function4(double radius, double length, double width, int property, int shape){
    
    double calculation = 0.0;
    
    switch(property){
        case 1:{//area
            if(shape == 1){//circle
                calculation = function5(radius);
            }
            else{//rectangle
                calculation = length * width;
            }
            break;
        }//case 1 end
            
        case 2:{//perimeter
            if(shape == 1){//circle
                calculation = 2 * PI * radius;
            }
            else{//rectangle
                calculation = (2 * length) + (2 * width);
            }
            break;
        }//case 2 end
    }//switch-case ending
    
    return(calculation);
}//function4 end














//function 5
/***************************************************/
double function5(double radius){
    
    double calculation = 0.0;
    
    calculation = PI * pow(radius, 2);
    return(calculation);
}//function5 end













//function 6
/***************************************************/
void function6(int dimension, int shape, int property, double calculation){
    switch(dimension){
        case 2:{//two dimension
            switch(shape){
                case 1:{//circle
                    if(property == 1){//area
                        printf("\nThe area of your circle is %.2lf",calculation);
                    }
                    else{//perimeter
                            printf("\nThe circumfrence of your circle is %.2lf",calculation);
                    }
                    break;
                }
                case 2:{//rectangle
                    if(property == 1){//area
                        printf("\nThe area of your rectangle is %.2lf",calculation);
                    }
                    else{//perimeter
                        printf("\nThe perimeter of your rectangle is %.2lf",calculation);
                    }
                }
                    break;
            }//shape S-C end
            break;
        }//two dimension S-C end
            
            
            
            
            
            
        case 3:{//three dimension
            switch(shape){
                case 1:{//sphere
                    if(property == 1){//surface area
                        printf("\nThe surface area of your sphere is %.2lf",calculation);
                    }
                    else{//volume
                        printf("\nThe volume of your sphere is %.2lf",calculation);
                    }
                    break;
                }
                case 2:{//rectangular prism
                    if(property == 1){//surface area
                        printf("\nThe surface area of your rectangular prism is %.2lf",calculation);
                    }
                    else{//volume
                        printf("\nThe volume of your rectangular prism is %.2lf",calculation);
                    }
                }
                    break;
            }//shape S-C end
            break;
        }//three dimension S-C end
            break;
    }//dimesnion S-C end
    
}//function6 end

