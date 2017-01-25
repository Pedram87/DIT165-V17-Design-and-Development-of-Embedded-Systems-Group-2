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

#define MAX 20

int main(){
    
    time_t t;
    srand(time(&t));
    int *pointer;
    int array[MAX];
    int i, number;
    
    
    pointer = array;
    
    
    
    /*Create an array of integers, array[MAX], and fill it with MAX no of random numbers.
     Let then the program print out the following:
     The value of the label array (address) is: xxxxxxxxxx First integer in the array is (array[0]) : xxxxxxxxxx
     The size of an integer (number of bytes) is : xxxxxxxxx The size of the whole array is : xxxxxxxxx
     End the program by printing out the array, then double all values in the array by use of a pointer and print it out again.*/
    printf("The value of the label array (address) is: %p\n", &array);
    
    for(i = 0; i < MAX; i++){
        number = 0;
        number = rand() % MAX+1;
        array[i] = number;
    }
    printf("First integer in the array is (array[0]) is: %d\n", array[0]);
    printf("The size of an integer (number of bytes) is: %d bytes\n", sizeof(i));
    printf("The size of the whole array is: %d bytes\n\n\n", sizeof(array));
    
    for(i = 1; i < MAX+1; i++){
        number = 0;
        number = rand() % MAX+1;
        array[i] = number;
        printf("Array:                           \t%d\n", number);
        
        printf("Doubling of array using pointer: \t%d\n\n", *(pointer+i)*2);
    }
    
    
    return 0;
}
