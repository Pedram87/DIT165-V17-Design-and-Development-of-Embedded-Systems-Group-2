#include <stdio.h>
#include <stdlib.h>


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

/* You should develop a program that calculates some statistical values for an array of integers. Among other things,
 the program will plot a histogram for the frequency of the different input numbers in the array.
To test it you need first to create an array of integers (table [MAX]) with MAX number of random numbers between 0 and MAXNUMBER.
Then you should write a function that for each possible number between 0 – MAXNUMBER
calculates how many times the number exists in the array. The result is then stored in a new array (frequency []).
Finally, you write a function that given the array frequency [] draw a histogram as followed example:
You should use the function and its function declaration below.
Given an array table[]={ 1,2,12, 5,1,0,0,5,9,12, 0,2,3,0} thhe program will printout:
0 xxxx
1 xx
2 xx
3 x
5 xx
9 x
12 xx
Note: Numbers with frequency 0 in the array frequency[] is not printed out.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
#define MAXNUMBER 20
// ------ Function declaration ----------
void create_random( int tab[] );
void count_frequency(int tab[], int freq[] );
void draw_histogram(int freq[] );
int main ( void){
int table[MAX], n ;
int frequency[MAXNUMBER];
….
} */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
#define MAXNUMBER 20

//Declare functions as described.
void create_random( int tab[] );
void count_frequency(int tab[], int freq[] );
void draw_histogram(int freq[] );

//Declare main and array for table and frequency as described.
int main ( void){
int table[MAX], n ;
int frequency[MAXNUMBER];

//A function that for each possible number between 0 – MAXNUMBER
//calculates how many times the number exists in the array.
create_random(table[MAX]);
//Loop through the array for table[MAX] to check if numbers between 0-MAXNUMBER exists.
for(int i =0; i<MAXNUMBER; ++i)
//Store the result variable i in frequency[] array.
frequency[i] =0;

}
