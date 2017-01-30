#include <stdio.h>
#include <stdlib.h>

/* ====================================

File name: exerc_2_7.c (or cpp)

Date: 2017-mm-dd

Group Number: 2

Members that contributed:

Pedram Shirinbolaghi

Jonas Torstensson

Robinson Iheanacho Mgbah

Demonstration code: [ ]

Important , No code no bonus !

====================================== */

/* Create a program that checks an entered Swedish person number. The number is entered in the form of : 7107254786 (yymmddxxxc).
The number should be read in as a string and converted to integers for year, month , day and number.
The last digit (here 6) is a control digit and is calculated from the other digits by an algorithm that you can find on the internet.
The user inputs the number, the program first checks that the number of month and day is in the right range and after that
calculate and checks the control digit. The program then prints out the result and asks for a new person number. This is repeated
until the user inputs a ‘q’.
The program should at least consist of the functions: main() , readPersnr( char *person), int controlDigit( const char * persnr ) . */

#define WITHINRANGE 10
char * inputNumbers[WITHINRANGE];

//The program checks here if the entered number is within range.
void readPersnr( char *person){
    int i = 0;
    char num;
    //While entered number is within range i.e "i<10"
    while(num = getchar()) != '\n' && i< (num){
    //Keep reading in numbers
        (person + i) = num
        i++
    }
}

int controlDigit( const char * persnr){}

int main()
{

    return 0;
}
