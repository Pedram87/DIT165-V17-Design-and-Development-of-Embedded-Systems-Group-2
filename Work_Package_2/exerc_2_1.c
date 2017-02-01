/* ====================================

File name: exerc_2_1.c (or cpp)

Date: 2017-02-01

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
#define MAX 20


char * read(){
 static  char word[MAX];
  char temp;

  printf("Enter a word\n\n");
  fgets(word, 19, stdin);
  return word;
}

void copyStringLib(char * destination, char * source){

  strcpy(destination, source);
  printf("copied string..\n%s", destination);
}


void readFile(char * fileName){
  
  //open the file
  FILE *myFile;  
  myFile = fopen(fileName,"r");
   char buffer[MAX];
  
  //read from the file
  fgets(buffer, MAX, (FILE*)myFile);
  

  printf("From file \n%s", buffer);
}

int main(int argc, char **argv){

  if(argc == 2){
    readFile(argv[1]);
    return 0;
  }else{
  char * ourWord = read();
  int i;
  
  for(i = 0; i < MAX; i++){
    printf("%c", ourWord[i]);
  }
  printf("\n");

  // copy the string
  char copied[MAX];
  copyStringLib(copied, ourWord);  
  return 0;
  }
}
