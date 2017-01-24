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

#define MAX 20

void copyString();


int main()
{
    /*Write a program that reads a string with a maximum of 20 characters from the keyboard and store it
     in a local string variable.
     Copy the string to another string by using:
     a) The library function strcpy(..)
     b) A new function void copyString(Ö) not using any library function.
     
     Main program ends by printing out the copied string in the console.
     The program should be able to read in from the keyboard or from a textfile ëmyfile.txtí containing
     one string of characters. You create this file with notepad or any other editor. The reading from a
     text file should be done by redirect the reading from command line when program execution starts
     as follows:
     Exerc_2_1 < myfile.txt
     Where Exerc_2_1 is the filename of the compiled program.*/
    
    int c;
    
    
    printf("Do you want to read in from a file or the keyboard?\nPress 'F' to read from File and 'K' for keyboard\n");
    while((c = getchar()) != EOF){
        if(c == 'F' || c == 'f'){
            printf("You have chosen file\n");
            char inputString[MAX];
            FILE *inputFile;
            inputFile = fopen("/Users/jonastorstensson/Desktop/HelloWorld/HelloWorld/myfile.txt", "r");
            if(inputFile){
                fscanf(inputFile, "%s\n", inputString);
                printf("%s", inputString);
                fclose(inputFile);
            }
            
            
            
        }
        
        else if(c == 'K' || c == 'k'){
            printf("You have chosen keyboard\n");
            printf("A. Type a string and it will be copied using strcpy()\n"); // Assignment A
            char srcstr[MAX], deststr[MAX];
            scanf("%s", srcstr);
            strcpy(deststr, srcstr);
            printf("The copied string using strcpy() was: %s\n", deststr);
            
            copyString(); // Assignment B
            
            return 0;
        }
        else if(c == 10); // we ignore enter as input
        else
            printf("Invalid input\n");
        
    }
    
    return 0;
}

void copyString(){
    printf("\nB. Type a string and it will be copied using our own copy function\n");
    char srcstr[MAX], deststr[MAX];
    int i = 0;
    scanf("%s", srcstr);
    
    while(srcstr[i] != '\0'){
        deststr[i] = srcstr[i];
        i++;
    }
    deststr[i] = '\0';
    printf("The copied string using our own copy function was: %s\n", deststr);
    
}

