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

File name: exerc_2_5.c (or cpp)

Date: 2017-mm-dd

Group Number: 2

Members that contributed:

Pedram Shirinbolaghi

Jonas Torstensson

Robinson Iheanacho Mgbah

Demonstration code: [ ]

Important , No code no bonus !


====================================== */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100
#define MAXNUMBER 20

void create_random(int tab[]);
void count_frequency(int tab[],int freq[]);
void draw_histogram(int freq[]);
int *tabGlobal;

void create_random(int tab[]){
  int i;
   srand(time(NULL));
   for(i = 0; i < MAXNUMBER; i++){
  
    tab[i] = rand() %MAXNUMBER + 1;
  }
   for(i=0; i < MAXNUMBER; i++){
     printf("%d ", tab[i]);
   }
   printf("\n");
    tabGlobal = tab;
}

void count_frequency(int tab[], int freq[]){
  int i,x;
  int frequency;

  for(i = 0; i < MAXNUMBER; i++){
    freq[i] = -1;
  }
  
  for(i = 0; i < MAXNUMBER; i++){
    frequency = 1;
    for(x = i+1; x < MAXNUMBER; x++){
      if(tab[i] == tab[x]){
	freq[x] = 0;
	frequency++;
      }
    }
    if(freq[i] != 0){
      freq[i] = frequency;
    }
  }
}

void draw_histogram(int freq[]){ 
  int i;
  int j;
  
  for(i = 0; i < MAXNUMBER; i++){
    if(freq[i] != 0){
      printf("%d ",tabGlobal[i]);
      for(j = 0; j < freq[i];j++){
	printf("x");
      }
      printf("\n");
    }
  }
}

int main(){
  int tab[MAXNUMBER];
  int freq[MAXNUMBER];
  create_random(tab);
  count_frequency(tab,freq);
  draw_histogram(freq);
  return 0;
}
