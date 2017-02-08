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

 

#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define MAX 10
enum DIRECTION {N,E,S,W};

typedef struct{
  int xpos;
  int ypos;
  enum DIRECTION dir;
}ROBOT;

void showDirection(enum DIRECTION *direction);
void showPosition(ROBOT robot);
void moveRobot(ROBOT robot);

void move(int *currentXpos, int *currentYpos, enum DIRECTION *direction){

  if(*direction == N)
    *currentYpos = *currentYpos + 2;
  
  if(*direction == E)
    *currentXpos = *currentXpos + 2;
  
  if(*direction == S)
    *currentYpos = *currentYpos - 2;
  
  if(*direction == W)
    *currentYpos = *currentXpos - 2;

  
}
void turn(enum DIRECTION *direction){

  // move round cardinal points 90 degrees N -> E -> S -> W -> N ...
  if(*direction == N)
    *direction = E;
     
  
  else  if(*direction == E)
    *direction = S;
     
  
  else  if(*direction == S)
    *direction = W;
    
  else
    *direction = N;
  // showDirection(direction);
 
}





void showDirection(enum DIRECTION *direction){
  printf("heading ");
  
  if(*direction == N)
    printf("North\n");
  else if(*direction == E)
    printf("East\n");
  else if(*direction == S)
    printf("South\n");
  else
    printf("West\n");
}

void showPosition(ROBOT robot){

  printf("xpos: %d\nypos: %d\n", robot.xpos,robot.ypos);
}



int main(){

  ROBOT myRobot;

  moveRobot(myRobot);
  return 0;

}


void moveRobot(ROBOT robot){

  int xPos;
  int yPos;

  //default direction = north
  robot.dir = N;
  char instructions[MAX];
  char read;
  int i;
  printf("Enter starting x and y positions ..\n");
  scanf("%d %d", &robot.xpos, &robot.ypos);
  

  printf("Give instructions\n");
  scanf("%s", instructions);

  for(i = 0; i < strlen(instructions); i++ ){
    if(instructions[i] == 'm' || instructions[i] == 'M'){
      move(&robot.xpos,&robot.ypos,&robot.dir);
      showPosition(robot);
      showDirection(&robot.dir);
    }
     if(instructions[i] == 't' || instructions[i] == 'T'){
      turn(&robot.dir);
      showPosition(robot);
      showDirection(&robot.dir);
    }
  }
}
