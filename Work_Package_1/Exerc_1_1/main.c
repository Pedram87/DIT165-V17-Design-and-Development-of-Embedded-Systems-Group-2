#include <stdio.h>
#include <stdlib.h>

/* ====================================

File name: exerc_1_1.c (or cpp)

Date: 2017-mm-dd

Group Number: 2

Members that contributed:

Pedram Shirinbolaghi

Jonas Torstensson

Robinson Iheanacho Mgbah

Demonstration code: [ ]

Important , No code no bonus !

====================================== *\

/*Write a program that reads in an integer number between 1 and 10 as input and prints out one of existing nine sentence in the console depending on what number was entered.
The program exits on number 0.*/

int main()
{
    // Integer to be entered
    int input;
  printf("Enter an integer 1-10:");


 //Read in the entered integer
 scanf("%d",&input);

 //Print the result
 if(input <= 10 && input >=0){printf("%d",input-1);}
 return 0;
}
