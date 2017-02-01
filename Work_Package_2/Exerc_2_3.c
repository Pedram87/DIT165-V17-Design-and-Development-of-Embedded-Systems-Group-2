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

File name: exerc_2_3.c (or cpp)

Date: 2017-1-31

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
#include <stdbool.h>
#define MAX 64

//function to compare 2 strings
int compareString(char * string1, char * string2){
  int i;
  for(i = 0; i < string1[i] != '\0' && string2[i] != '\0'; i++){
    if(string1[i] != string2[i]){
      printf("%s is not the same as %s", string1, string2);
      return 0;
    }
  
  }
  printf("%s is the same as %s\n", string1, string2);
  return 1;
}

int main(int argc, char **argv){

  if(argc == 3){
    compareString(argv[1], argv[2]);
  }else
    printf("arguments should be 2 strings\n");
}
