#include <stdio.h>
#include <stdlib.h>
#define MAXCHAR 20

/* ====================================

File name: exerc_2_1.c (or cpp)

Date: 2017-mm-dd

Group Number: 2

Members that contributed:

Pedram Shirinbolaghi

Jonas Torstensson

Robinson Iheanacho Mgbah

Demonstration code: [ ]

Important , No code no bonus !

====================================== */

/* Write a program that reads a string with a maximum of 20 characters from the keyboard and store it in a local string variable.
Copy the string to another string by using:
a) The library function strcpy(..)
b) A new function void copyString(…) not using any library function.
Main program ends by printing out the copied string in the console.
The program should be able to read in from the keyboard or from a textfile ‘myfile.txt’ containing one string of characters. You create this file with notepad or any other editor. The reading from a text file should be done by redirect the reading from command line when program execution starts as follows:
Exerc_2_1 < myfile.txt
Where Exerc_2_1 is the filename of the compiled program.*/

int main()
{
    //Declare source and destination string literals.
    char string_src[20];
    char string_destination[20];

    //Receive input from user .
    printf("Enter a string of maximum 20 characters")
    scanf("%s",string_src);

    //Make sure only 20 chars can be entered, if larger end then the program.


    //a)
    strcpy(string_destination,string_src);

    //Print string output
     printf("%s",string_destination);

    return 0;
}
