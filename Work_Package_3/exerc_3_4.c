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
#include<string.h>
#define FILENAME "database.bin"
typedef struct{
  char firstname[20];
  char famname[20];
  char pers_number[12]; // yymmddnnnc
}PERSON;

PERSON input_record(void);//reads in a record
void write_new_file(PERSON *inrecord);//creates a file and writes a new record
void printfile(void);//print out all persons in a file
void search_by_firstname(char *name);
void append_file(PERSON *inrecord);//appends a new person to the file
void clearstdin(void);
PERSON input_record(void){

  PERSON *newperson =  malloc(sizeof(PERSON));
  char firstName[256];
  char lastName[256];
  char pNum[256];
  
  printf("First name: ");
  strncpy(newperson->firstname,fgets(firstName,sizeof(firstName),stdin), sizeof(newperson->firstname));
  

  printf("Last name: ");
  strncpy(newperson->famname,fgets(lastName,sizeof(lastName),stdin), sizeof(newperson->famname));
  

  printf("Person number ");
  strncpy(newperson->pers_number,fgets(pNum,sizeof(pNum),stdin), sizeof(newperson->pers_number));
  

  append_file(newperson);
  return *newperson;
}
void write_new_file(PERSON *inrecord){  
  FILE *myFile = fopen(FILENAME, "wb");
  if(myFile != NULL){
    remove(FILENAME);
     myFile = fopen(FILENAME, "wb");
  }  
    fwrite(inrecord,sizeof(PERSON),1,myFile);
  fclose(myFile);
  
}

void printfile(){
  FILE *myfile = fopen(FILENAME, "r");
  char c;
  if(myfile){
    while((c = getc(myfile)) != EOF){
      putchar(c);
    }
    printf("\n");
    fclose(myfile);
  }  
}


void search(char *name){
  FILE *myfile;
  PERSON *result = malloc(sizeof(PERSON));
  myfile = fopen(FILENAME, "rb");
  
  while(fread(result, sizeof(PERSON), 1, myfile)){
    if(!strcmp(name, result->firstname)){
      printf("First Name: %s\nLast Name: %s\nPerson Number: %s\n",result->firstname, result->famname, result->pers_number );
    }
    if(!strcmp(name, result->famname)){
	 printf("First Name: %s\nLast Name: %s\nPerson Number: %s\n",result->firstname, result->famname, result->pers_number );
    }else
      printf("does not exist\n");
  }
}

void append_file(PERSON *inrecord){
  FILE *myFile = fopen(FILENAME,"ab");

 
  fwrite(inrecord,sizeof(PERSON),1,myFile);
  fclose(myFile);
  
  }

void make_dummy_record(){
  PERSON *inrecord = malloc(sizeof(PERSON));
  strncpy(inrecord->firstname,"robinson", sizeof(inrecord->firstname));
   strncpy(inrecord->famname,"mgbah", sizeof(inrecord->famname));
   strncpy(inrecord->pers_number,"198905291539", sizeof(inrecord->pers_number));
   write_new_file(inrecord);
}

int run(int choice){
  
  if(choice == 1){
    make_dummy_record();
    printf("New Database created...\n");
     printf("Please select operation\n");
    scanf("%d", &choice);
    clearstdin();
    run(choice);
  }else if(choice == 2){
    input_record();
     printf("Please select operation\n");
    scanf("%d", &choice);
     clearstdin();
    run(choice);
  }else if(choice == 3){
    char *searchN;
    printf("Please enter a name to search ...........\n");
    scanf("%s", searchN);
     clearstdin();
    search(searchN);
     printf("Please select operation\n");
    scanf("%d", &choice);
     clearstdin();
    run(choice);
  }else if(choice == 4){
    printfile();
    printf("Please select operation\n");
    scanf("%d", &choice);
     clearstdin();
    run(choice);
  }else if(choice == 5){
    exit(0);
  }else{
    printf("Please select a valid choice\n");
    scanf("%d", &choice);
     clearstdin();
    run(choice);
  }
  return -1; 
  }

void clearstdin(){
  while(getchar() != '\n' && getchar() != EOF){
    ;
  }
}
/*
  TEST AREA

int main(){
  PERSON *p = malloc(sizeof(PERSON));
   strncpy(p->firstname,"robinson", sizeof(p->firstname));
   strncpy(p->famname,"mgbah", sizeof(p->famname));
   strncpy(p->pers_number,"198905291539", sizeof(p->pers_number));

   write_new_file(p);
   input_record();
   input_record();
  printfile();
  //input_record();
  //append_file(p);
  // printfile();
  //char searchname [] = "mgbah"; 
  search("robinson");
  
  //PERSON *pp = malloc(sizeof(PERSON));
  
  //append_file(&pp);
  
  return 0;

  }*/

int main(){
  printf("-----------------------------------------------\n");
  printf("                        MENY                   \n");
  printf("-----------------------------------------------\n");
  printf("1.CREATE NEW DATABASE\n2.ADD NEW PERSON TO DATABASE\n3.SEARCH FOR A PERSON IN DATABSE\n4.PRINTOUT ALL IN DATABASE\n5.EXIT THE PROGRAM\n");
  printf("-----------------------------------------------\n");
  printf("Enter a valid choice...\n");
  int choice;
  scanf("%d", &choice);
  run(choice);
}
