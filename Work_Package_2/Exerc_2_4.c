/* ====================================

File name: exerc_2_7.c (or cpp)
Date: 2017-1-31
Group Number: 2
Members that contributed:
Pedram Shirinbolaghi
Jonas Torstensson
Robinson Iheanacho Mgbah
Demonstration code: [ ]
Important , No code no bonus !
=======

File name: exerc_2_4.c (or cpp)

Date: 2017-mm-dd

Group Number: 2

Members that contributed:

Pedram Shirinbolaghi

Jonas Torstensson

Robinson Iheanacho Mgbah

Demonstration code: [ ]

Important , No code no bonus !


====================================== */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// using my compareString(idea) function from Exerc_2_3
int isPalindrome(char * string1, char * string2){
  int i;
  for(i = 0; i < string1[i] != '\0' && string2[i] != '\0'; i++){
    if(string1[i] != string2[i]){
      printf("%s is not a palindrome\n", string1);
      return 0;
    }
  
  }
  printf("%s is a palindrome\n", string1);
  return 1;
}

char * reverseString(char * word){
  char * reversedArray= malloc(strlen(word) * sizeof(char*));
 
  //iterate the word from the end
  int i;
  
  //counter for the new array from index 0
  int x = 0;

  
  for(i = strlen(word)-1; i >= 0; i--){
      reversedArray[x] = word[i];
      x++;
    }

  // check if the word is a palindrome
  isPalindrome(word,reversedArray);
    
  return reversedArray;
}



int main(int argc, char **argv){

  reverseString(argv[1]);
  return 0;
}
