#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXCHAR 20

/*Create a program that reads two strings from the command line when it starts and checks if it is two
strings and if the two strings are identical or not. Do this with and without use of library function
strcmp(..). Let the program print out the result in any way */


/* ====================================

File name: exerc_x_y.c (or cpp)

Date: 2017-mm-dd

Group Number: 2

Members that contributed:

Pedram Shirinbolaghi

Jonas Torstensson

Robinson Iheanacho Mgbah

Demonstration code: [ ]

Important , No code no bonus !

====================================== */

//Function to use instead of strcmp().
int compareString(char[], char[]);


int main(int *argc, char *argv[])
{

    //Declare two strings.
    char string1[MAXCHAR];
    char string2[MAXCHAR];

    //Read in string1.
    printf("Enter first string: \t");
    scanf("%s",string1);

    //Read in string2.
    printf("Enter second string \t");
    scanf("%s",string2);

    //Using strcmp() check if both strings are equal.
    /*if (strcmp(string1,string2) == 0)
      printf("Entered strings are equal.\n");
   else
      printf("Entered strings are not equal.\n"); */

    //Check if strings are identical without strcmp().
    int comparedStringResult;
    comparedStringResult = compareString(argv[1], argc[2]);
		if (comparedStringResult == 1) {
			printf("Without strcmp: The strings are identical\n");
			return EXIT_SUCCESS;
		} else {
			printf("Without strcmp: The strings are not identical\n");
			return EXIT_FAILURE;}
            return 0;

}





