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

#define MAX 25

int main(){
    
    /*Create a program that reads in a string and determines if the string is a palindrome.
     A word is a palindrome if it is the same word
     reading from left to right or right to left.
     We can assume that it is a simple strings without any space character in it.
     Example of palindrome : level, rotor and racecar.*/
    
    
    int status = 0;
    int i, len;
    char word[MAX];
    
    printf("Enter a string to determine if it is a palindrome or not: \n");
    scanf("%s", word);
    
    len = strlen(word);
    printf("The length of the word is: %d\n", len);
    
    for(i = 0; i < len; i++){
        // M A D A M strlen == 5
        /*
         0. M word[5-0-1] = 4 = M
         1. A word[5-1-1] = 3 = A
         2. D word[5-2-1] = 2 = D
         3. A word[5-3-1] = 1 = A
         4. M word[5-4-1] = 0 = M
         
         J O N A S strlen == 5
         0. J word[5-0-1] = 4 = S
         1. O
         2. N
         3. A
         4. S
         */
        if(word[i] != word[len-i-1]){
            status = 1;
            break;
        }
    }
    
    if(status == 1) {
        printf("%s is not a palindrome\n", word);
    }else{
        printf("%s is a palidrome\n", word);
    }
    
    return 0;
}

