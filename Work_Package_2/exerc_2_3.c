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

int compareStrings(char string1[], char string2[]);
int main(){
    
    /*Create a program that reads two strings from the command line when it starts
     and checks if it is two strings and if the two strings are identical or not.
     Do this with and without use of library function strcmp(..).
     Let the program print out the result in any way.*/
    
    char string1[MAX], string2[MAX];
    int returnValue;
    

    printf("Please type the first string: ");
    scanf("%s", string1);
    printf("Please type the first string: ");
    scanf("%s", string2);
    
    printf("String 1 is: %s\nString 2 is: %s\n\n", string1, string2);
    returnValue = strcmp(string1, string2);
    
    if(returnValue == 0){
        printf("The strings are identical because of return value %d\n\n", returnValue);
    }else{
        printf("The string are NOT identical because of return value %d\n\n", returnValue);
    }
    
    compareStrings(string1, string2);
    
    
    return 0;
}

int compareStrings(char string1[], char string2[]){
    int result = 1; // Default case where we assume the strings are identical
    for(int i = 0;string1[i] != '\0' && string2[i] != '\0'; i++){
        if(string1[i] != string2[i]){
            result = 0; // 0 means that the strings are not identical, hence we can break the loop and return the result
            break;
        }
    }
    printf((result == 1) ? "Own method: The strings are identical\n" : "Own method: The strings are NOT identical\n" );
    return result;
}
