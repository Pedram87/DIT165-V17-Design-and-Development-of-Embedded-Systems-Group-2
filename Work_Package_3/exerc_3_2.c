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
====================================== */
#include<stdio.h>
#include<stdlib.h>

int search_number(int number, int tab[], int size){

  
  int i;
  int position = -1;

  for(i = 0; i < size;i++){
    
    if(number == tab[i]){
      position = i;
       break;
    }
  }
  return position;
}








void sort(int number, int tab[]){
  int i;
  int j;
  int temp;
  
  for(i=0;i<number-1;++i)
    for(j=0;j<number-i-1;++j)
    {
        if(tab[j]>tab[j+1])   
        {
            temp=tab[j];
            tab[j]=tab[j+1];
            tab[j+1]=temp;
        }
    }
    for(i=0;i<number;++i)
         printf("%d ",tab[i]);
    printf("\n");
}


int main(){
 
  int array[] = {1,2,34,5,67,3,23,12,13,10};
  sort(10, array);
  
 
}
