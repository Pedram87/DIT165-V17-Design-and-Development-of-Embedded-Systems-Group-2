/*
  mgbah robinson iheanacho
  26th januari 2016
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * createArray(int max){
  int i;
  int *array = malloc(max * sizeof(int*));
  srand(time(NULL));
  
  for(i = 0; i < max; i++){
    array[i] = rand()%50;
  }
   printf("The value of the label array(adress) is: %p \n", &array);
   printf("The first value of the array is: %d\n", array[0]);
   printf("The size of an integer is: %lu\n", sizeof(int));
    printf("The size of the array is: %zu\n", sizeof(array));

    int *a;
    a = array;
    
    for(i=0; i<max;i++){
      printf("%d ",array[i]);
    }
    printf("\n");
    
    for(i = 0; i<max;i++){
      a[i] = a[i] * 2;
    }

    for(i=0; i<max;i++){
      printf("%d ",array[i]);
    }
    printf("\n");
    
  return array;
}

int main(){
  
  createArray(20);
  return 0;
  
}
