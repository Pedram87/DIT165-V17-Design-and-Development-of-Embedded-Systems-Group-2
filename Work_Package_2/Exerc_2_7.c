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

#define MAXLENGTH 11

void readPersnr(char *person);
int controlDigit(const char *persnr);


/*  1. Create a program that checks an entered Swedish person number. The number is entered in the form of : 7107254786 (yymmddxxxc). The number should be read in as a string and converted to integers for year, month , day and number.
 2. The last digit (here 6) is a control digit and is calculated from the other digits by an algorithm that you can find on the internet.
 3. The user inputs the number, the program first checks that the number of month and day is in the right range and after that calculate and checks the control digit.
 4. The program then prints out the result and asks for a new person number. This is repeated until the user inputs a ‘q’.
 The program should at least consist of the functions: main() , readPersnr( char *person), int controlDigit( const char * persnr ) .*/


int main(){;
    char inputStr[MAXLENGTH];
    
    
    while(1){

        if(inputStr[0] == 'q'){
            break;
        }
    readPersnr(inputStr);
        if(inputStr[0] == '\n'){
            printf("Enter pressed");
        }
    controlDigit(inputStr) == 1 ? printf("The Swedish social security number is valid\n") : printf("The Swedish social security number is NOT valid\n");
    }
    
    
    return 0;
}

/*1. Create a program that checks an entered Swedish person number. The number is entered in the form of : 7107254786 (yymmddxxxc). The number should be read in as a string and converted to integers for year, month , day and number.*/

void readPersnr(char *person){
    char c;
    int a;
    char string[MAXLENGTH];
    
    puts("Enter a Swedish social security number (10 digits):");
    /*while ( (c = getchar() == '\n') ) {
        for(int i = 0; i < MAXLENGTH; i++){
            string[i] = getchar();
            printf("%c", string[i]);
        }
        
    }*/
    
    fgets(person, MAXLENGTH, stdin);
    while( (c = getchar() != '\n') && (a = getchar() != EOF)){
        ;
    }
    puts(person);
}


/*2. The last digit (here 9) is a control digit and is calculated from the other digits by an algorithm that you can find on the internet.
 3. The user inputs the number, the program first checks that the number of month and day is in the right range and after that calculate and checks the control digit.*/


int controlDigit(const char *persnr){
    int year, month, day, controlnumber;
    int total = 0;
    
    
    
    year = (*persnr-48) * 10 + (*(persnr+1)-48);
    month = (*(persnr+2)-48) * 10 + (*(persnr+3)-48);
    day = (*(persnr+4)-48) * 10 + (*(persnr+5)-48);
    controlnumber = (*(persnr+9)-48);
    
    /*  8  1 1 2 1 8  9 8  7
     *  2  1 2 1 2 1  2 1  2
     -------------------------
     ^  ^ ^ ^ ^ ^  ^ ^  ^
     16  1 2 2 2 8 18 8 14
     
     Produkterna ska sedan splittras upp och adderas;
     
     1+6+1+2+2+2+8+1+8+8+1+4 = 44
     
     Denna summa subtraheras från närmast högre tiotal, eller från sig självt om den är jämnt delbar med 10. Detta kan beskrivas som en modulus 10 operation: 10 - (44 % 10) = 6
     
     Kontrollsiffran f är alltså 6 och hela personnumret blir 811218-9876.**/


    

    
    if( (month < 13 && month > 0) && (day < 32 && day > 0) ){
        for(int i = 0; i < MAXLENGTH-2; i++){ // We only check the 9 first elements [0-9]
                0 == (i % 2) ? (total += (*(persnr+i)-48) * 2 / 10 + (*(persnr + i) - 48) * 2 % 10 ) : (total += (*(persnr + i)-48));
            
            printf("%2d. %d\n", i, total);
        }
    }
    
    
    return ((10 - (total % 10)) % 10) == controlnumber ? 1 : 0; // Returns 1 if it is a valid 0 if it is not
}

