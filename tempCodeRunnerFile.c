#include <stdio.h>
#include <stdbool.h>
#include "myBank.h"
#define ROWS 50
#define COLUMMS 2
#define ACOUNT_NUM_C 0        // C STANDS FOR COLUMNS
#define AMOUNT_C 1            // C STANDS FOR COLUMNS

double acountArr [ROWS][COLUMMS];


void openAcount (int amount){
   
bool flag = false;
   for (int i = 0; i <ROWS && flag==false; i++)
    {
      if (acountArr[i][0] == 0){
          acountArr[i][0] = 1;   
          flag = true;  
          acountArr[i][AMOUNT_C] = amount;
          printf("Acount number is: %lf,",900+i);
      }
    }  
    if (!flag){
        printf("there is no room for your account have a great day");
    }
}

void checkBallance (int acount_number){

}
void newBallance (int acount_number, int amount){

}
void withdrawl(int acount_number, int amount){

}
void closeAcount(int acount_number){

}
void interest( double interest_rate){

}
void printAcount( double interest_rate){

}
void closeAndExit(){

}