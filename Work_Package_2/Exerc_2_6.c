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

File name: exerc_2_6.c (or cpp)

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

/*
Method declarations
*/
void initQue(int list[],int max);
int input(int list[], int number, int max);
int output(int list[], int max);

/*
populate the queue with -1 in all cells
*/
void initQue(int list[], int max){
  int i;
  for(i = 0; i < max; i++){
    list[i] = -1;
  }
}

/*
add a value to the queue 
return 1 if succesful and 0 if queue is full
*/
int input(int list[],int number, int max){
  int i = 0;
  int top = 0;
  while(top != max){
    if(list[i] == -1){
      list[i] = number;
      return 1;
    }else{
      top++;
      i++;
    }
  }
  return 0;
}

/*
fetch a value from the queue 
return value if successful 
return 0 if queue is empty
*/

int output(int list[],int max){
  int i = max-1;
  int fetch;
  
  while(i >= 0){
    if(list[i] != -1){
      fetch = list[i];
      list[i] = -1;
      break;
    }
    i--;
  }
  return fetch;
}

int main(){
  int list[5];
  int *listPtr = list;
  int i,inputValue;
  /*
    create a queue and fill all cells with values of  -1
  */
  initQue(listPtr, 5);
  printf("Before insert\n");
  for(i = 0; i < 5; i++){
    printf("%d ", listPtr[i]);
  }
  printf("\n");

  
  /* 
     insert 3 into the queue
   */
  printf("After insert\n");
 inputValue = input(listPtr,3,5);

  for(i = 0; i < 5; i++){
    printf("%d ", listPtr[i]);
  }
  printf("\nreturn value of input method: %d\n", inputValue);
  
  /*
    insert 4 into the queue
  */
   printf("After insert\n");
 inputValue = input(listPtr,4,5);
  for(i = 0; i < 5; i++){
    printf("%d ", listPtr[i]);
  }
  printf("\nreturn value of input method: %d\n", inputValue);
  
  /*
insert 6 into the queue
  */
   printf("After insert\n");
  inputValue = input(listPtr,5,5);
  for(i = 0; i < 5; i++){
    printf("%d ", listPtr[i]);
  }
  printf("\nreturn value of input method: %d\n", inputValue);
  
  /*
insert 10 into the queue
  */
   printf("After insert\n");
  inputValue = input(listPtr,8,5);

  for(i = 0; i < 5; i++){
    printf("%d ", listPtr[i]);
  }
  printf("\nreturn value of input method: %d\n", inputValue);

  /*
insert 7 into the queue
  */
   printf("After insert\n");
  inputValue = input(listPtr,7,5);
  for(i=0;i<5;i++){
    printf("%d ",list[i]);
  }
  printf("\nreturn value of input method: %d\n", inputValue);
  
  /*
insert a value when the queue is full
  */
   printf("After insert when array stack is full\n");
    inputValue = input(listPtr,6,5);
    printf("return value of input method: %d\n\n\n", inputValue);


    /*
fetch values from the queue
Last In, First Out
    */
    printf("Queue before any value is fetched\n");
    printf("........................................\n");
    for(i=0;i<5;i++){
    printf("%d ",list[i]);
  }
  printf("\n........................................\n");
  
  int fetchValue = output(listPtr,5);
  printf("fetch value: %d\n",fetchValue);
  for(i=0;i<5;i++){
    printf("%d ",list[i]);
  }
  printf("\n");
  
  fetchValue = output(listPtr,5);
  printf("fetch value: %d\n",fetchValue);
  for(i=0;i<5;i++){
    printf("%d ",list[i]);
  }
  printf("\n");
  
  fetchValue = output(listPtr,5);
  printf("fetch value: %d\n",fetchValue);
  for(i=0;i<5;i++){
    printf("%d ",list[i]);
  }
  printf("\n");
  
  fetchValue = output(listPtr,5);
  printf("fetch value: %d\n",fetchValue);
  for(i=0;i<5;i++){
    printf("%d ",list[i]);
  }
  printf("\n");

  fetchValue = output(listPtr,5);
  printf("fetch value: %d\n",fetchValue);
  for(i=0;i<5;i++){
    printf("%d ",list[i]);
  }
  printf("\n");
  
  fetchValue = output(listPtr,5);
  printf("fetch value: %d\n",fetchValue);
  
}
