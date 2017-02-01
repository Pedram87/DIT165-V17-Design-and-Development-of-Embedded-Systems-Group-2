#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

/*Write a program that reads a string with a maximum of 20 characters from the keyboard and store it in a local string variable.
Copy the string to another string by using:
a) The library function strcpy(..)
b) A new function void copyString(…) not using any library function.
Main program ends by printing out the copied string in the console.
The program should be able to read in from the keyboard or from a textfile ‘myfile.txt’ containing one string of characters. You create this file with notepad or any other editor. The reading from a text file should be done by redirect the reading from command line when program execution starts as follows:
Exerc_2_1 < myfile.txt*/
int main()
{
    //String of maximum 20 characters
    char max_twenty[20];
    //Another string which can contain max 20 chars
    char another_string[20];

    //Ask user for input and read in the string
    printf("Input a string of maximum 20 characters:");
    scanf("%s",max_twenty);

    //Copy string using strcpy()
    strcpy(max_twenty,another_string);
    printf("%s",another_string);

    getchar();
    return 0;
}
