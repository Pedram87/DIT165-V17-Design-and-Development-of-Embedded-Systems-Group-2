//
//  main.c
//  HelloWorld
//
//  Created by Jonas Torstensson on 2016-12-28.
//  Copyright © 2016 Jonas Torstensson. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 100
#define MAXNUMBER 20

void create_random(int *tab);
void count_frequency(int *tab, int *freq);
void draw_histogram(int *freq);


int main(){
    
    int tabell[MAX], n;
    int frekvens[MAXNUMBER];
    
    /* You should develop a program that calculates some statistical values for an array of integers. Among other things, the program will plot a histogram for the frequency of the different input numbers in the array.
     1. To test it you need first to create an array of integers (table [MAX]) with MAX number of random numbers between 0 and MAXNUMBER.
     2. Then you should write a function that for each possible number between 0 – MAXNUMBER calculates how many times the number exists in the array. The result is then stored in a new array (frequency []).
     3. Finally, you write a function that given the array frequency [] draw a histogram as followed example: You should use the function and its function declaration below.
     
     Given an array table[]={ 1,2,12, 5,1,0,0,5,9,12, 0,2,3,0} thhe program will printout:
     0 xxxx 1 xx
     2 xx 3x
     5 xx 9x 12 xx
     Note: Numbers with frequency 0 in the array frequency[] is not printed out.
     #include <stdio.h> #include <stdlib.h> #include <time.h>
     #define MAX 100 #define MAXNUMBER 20
     // ------ Function declaration
     void create_random( int tab[] );
     void count_frequency(int tab[], int freq[] ); void draw_histogram(int freq[] );
     int main ( void){
     int table[MAX], n ;
     int frequency[MAXNUMBER]; ....
     }
 */
    create_random(tabell);
    count_frequency(tabell, frekvens);
    draw_histogram(frekvens);
    

    
  return 0;
}

void create_random(int *tab){
    int i;
    srand(time(NULL));
    for(i = 1; i < MAX+1; i++){
        tab[i] = rand() % MAXNUMBER+1;
    }
}


/*2. Then you should write a function that for each possible number between 0 – MAXNUMBER calculates how many times the number exists in the array. The result is then stored in a new array (frequency []).*/

void count_frequency(int *tab, int *freq){
    int i, howMany, result;
    for(i = 1; i < MAX+1; i++){
        howMany = tab[i]; // Assign the random numbers in array tab to variable howMany
        result =  (freq[howMany] = freq[howMany]+1);
        //printf("%3d. howMany: %3d freq[howMany]+1: %3d \n", i, howMany, result);
    }
    
}

/*3. Finally, you write a function that given the array frequency [] draw a histogram as followed example: You should use the function and its function declaration below.
 Given an array table[]={ 1,2,12, 5,1,0,0,5,9,12, 0,2,3,0} thhe program will printout:
 0 xxxx 1 xx
 2 xx 3x
 5 xx 9x 12 xx
 Note: Numbers with frequency 0 in the array frequency[] is not printed out.
 #include <stdio.h> #include <stdlib.h> #include <time.h>
 #define MAX 100 #define MAXNUMBER 20
 // ------ Function declaration
 void create_random( int tab[] );
 void count_frequency(int tab[], int freq[] ); void draw_histogram(int freq[] );
 int main ( void){
 int table[MAX], n ;
 int frequency[MAXNUMBER]; ....
 }*/

void draw_histogram(int *freq){
    int i, j;
    for(i = 1; i < MAXNUMBER+1; i++){
        if(freq[i] != 0){
            printf("%3d.\t", i);
            for(j = 1; j < freq[i]+1; j++){
                printf("x");
            }
            printf("\n");
        }
        
    }
}
