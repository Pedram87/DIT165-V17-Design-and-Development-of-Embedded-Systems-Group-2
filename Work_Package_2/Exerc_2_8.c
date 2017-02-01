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
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>     


#define MAX_COINS 13

const int HUMAN = 0;
const int COMPUTER = 1;
//int *inputPtr;

int  human_choice(int pile){
  int input = 0;
  printf("enter a value between 1 & 3\n");
  scanf("%d", &input);
  //clear stdin
  while(getchar() != '\n' && getchar() != EOF){
    ;
  }
  if((input > 0 && input < 4) && input < pile){
    return input;
  }else{
    printf("Must be between 1 and 3\n");
    //recursively run the method again
    return human_choice(pile);
  }
}


int computer_choice(int pile){
   srand(time(NULL));
   int guess = rand() %  3 + 1;
   if(pile < 5){
     if(pile == 4)
       return 3;
   if(pile == 3)
     return 2;
   if(pile == 2)
     return 1;
   }else
     return guess;

   return 0;
}

int toggle(int player){
  if(player == 0)
    return 1;
  else
    return 0;
}

int play_again(){
  printf("Det var super kul...\nVill du spela igen?tryck r, vill du avsluta? tryck n\n");
  char c;
  
  scanf("%c", &c);
  if(c == 'r' || c == 'R'){
    return 1;
  }else if(c == 'n' || c == 'N'){
    return 0;
  }else{
    printf("Please enter r to replay or n to quit!\n");
    return play_again();
  }
  //clear stdin
  while(getchar() != '\n' && getchar() != EOF){
    ;
  }
  
}

void write_winner(int player){
  if(player == 0){
    printf("Hehe jag vann :(\n");
  }else
    printf("Grattis! Du vann :)'n");
}


//test area
/*
int  main(){
  human_choice(10);
  int x = computer_choice(10);
  printf("Computer choice: %d\n",x);
  // int y;
  // printf("toggle\n");
  // scanf("%d", &y);
  //int w = toggle(y);
   // printf("toggle %d\n", w);
  //play_again();
  // write_winner(w);
  return 0;
  }
*/

/***************************************************
 *
 *    MAIN
 *
 ***************************************************/

int main(){
  int pile,			/* This is how many coins we have */
    player,			/* Who is playing? */
    n_coins;			/* Number of coins taken */
  
  srand( time(0) );		/* Setup random */

  printf("Välkommen till NIM by pedram, jonas and robinson\n");
 
 
  
  pile = MAX_COINS;		/* Set start values (= init) */
  player = HUMAN;

  /* 
   *  Program main loop 
   */
  while( true ) {	

    printf("Det ligger %d  mynt i högen\n", pile );
    
    if( player == HUMAN ){
      n_coins = human_choice(pile);      
    }else{
      n_coins = computer_choice(pile);
      printf("- Jag tog %d\n", n_coins);      
    }
    pile -= n_coins;
    player = toggle( player );
      
    if( pile <= 1 ){
      break;
    }
  }
   
   
  write_winner( player );   
  if(play_again() == 1)
     main();
   else
     printf("Avslutat\n");

  return 0;
}
