//
//  main.c
//  HW11_dah172
//
//  Created by Dj Hinton on 3/19/17.
//  Copyright © 2017 Dj Hinton. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    printf("Engineering 12\nVidic 2:00PM\nMembers: Dj Hinton, Jocyln Hawk, Clair Sattler\nMarch 21, 2017\n\n\n");
    
    printf("The first \\n puts the text on a new line, the double slash by the n is\nneeded to allow the printing of the \\n in this printout. If you want to add\na tab in the print out you insert \\t\t it will tab the text as shown here.\n\nSometimes it is nice to print out text in \"doubble quotes\", this requires the double quote escape sequence \\\". Sometimes it is nice to print out text in \'single quotes\', this requires the single quote escape sequence \\\'. \n\nWant to printout a %% sign, you need to use the escape sequence \"%%%%\", do you understand \nthe code required to print this sequence out\\\? \n\nFinally, notice all the single slashes\'\\\' at the end of each line. These allow you to wrap the printf string to the next line for easy reading. Make a bell ring at this point. \a Did you hear the bell ring\?\n\n");
    
    int A = 1;
    double B = 2.34;
    char C = 'f';
    
    printf("This is the printing of A = %d, B = %lf, and C = %c in a user friendly manner.\n",A,B,C);
    
    printf("This is the printing of A = %d, B = %d, and C = %c using an int format type.\n",A,B,C);
    
    printf("This is the printing of A = %lf, B = %lf, and C = %c using a double format type.\n",A,B,C);
    
    printf("This is the printing of A = %c, B = %c, and C = %c using a char format type.\n",A,B,C);
    
    
    
    int G[4];
    float H[2][2];
    
    
     G = {3, 5, 8, 9};
     printf("These are the array elements:\n G[0]=%d, G[1]=%d, G[2]=%d, G[3]=%d.",G[0], G[1], G[2], G[3]);
    
     H = {{4.4, 5.5},{6.6, 7.7}};
     printf("These are the array elements:\n H[0,0] = %lf, H[0,1] = %lf, H[1,0] = %lf, H[1,1] = %lf.", H[0,0], H[0,1], H[1,0], H[1,1]);
     
    
    
    
    
    
    
    
    
    
    
    
   
}
