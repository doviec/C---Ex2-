#include <stdio.h>
#include <stdbool.h>
#include "myBank.h"
#define ROWS 50
#define COLUMMS 2
#define ACCOUNT_NUM_C 0           // C STANDS FOR COLUMNS
#define AMOUNT_C 1               // C STANDS FOR COLUMNS

double accountArr [ROWS][COLUMMS];


void openAccount (double amount){

  if (amount > 0)
  {
    int flag = 0;
    for (int i = 0; i <ROWS && flag==false; i++)
        {
        if (accountArr[i][ACCOUNT_NUM_C] == 0){
            accountArr[i][ACCOUNT_NUM_C] = 1;   
            flag = 1;  
            accountArr[i][AMOUNT_C] = amount;
            printf("Account number is: %d \n",901+i);
        }
        }  
        if (flag == 0){
            printf("there is no room for your account have a great day \n");
        }
  }else
  {
      printf("Please enter an amount that's positive and larger then zero \n");
  }
  
}

void ballance (int account_number){

    if (account_number >= 901 && account_number <= 950)
    {
        if (accountArr[account_number-901][ACCOUNT_NUM_C] == 0)
         {
            printf("Your acount is closed \n");
         }else{
            printf("Your ballance is: %0.2lf \n", accountArr[account_number-901][AMOUNT_C]);
         }
    }else{
            printf("ERROR Not a valid number \n");
         }
}
void deposit(int account_number, double amount){

    if (account_number >= 901 && account_number <= 950 && amount >= 0)
    {    
        if (accountArr[account_number-901][ACCOUNT_NUM_C] == 0)
        {
            printf("Your acount is closed \n");
        }else
        {
                accountArr[account_number-901][AMOUNT_C] += amount;
                printf("Your ballance is: %0.2lf \n", accountArr[account_number-901][AMOUNT_C]);
        }
    }else{
        printf( "ERROR Not a valid number \n");
         }  
}
void withdrawal(int account_number, double amount){
    
    if (account_number >= 901 && account_number <= 950)
    {
        if (accountArr[account_number-901][ACCOUNT_NUM_C] == 0)
        {
            printf("Your acount is closed \n");
        } 
        else if ( accountArr[account_number-901][AMOUNT_C] > amount && amount >= 0)
            {
                    accountArr[account_number-901][AMOUNT_C] -= amount;
                    printf("Your ballance is: %0.2lf \n", accountArr[account_number-901][AMOUNT_C]);
            } 
            else if (accountArr[account_number-901][AMOUNT_C] == amount)
            {
                    accountArr[account_number-901][AMOUNT_C] = 0;
                    printf("**Warning** Your ballance is now empty \n");
            }
            else{
                  printf("Not enough funds in your balance \n");
                }
    }
    else {
           printf( "ERROR Not a valid number \n");
         }
}

void closeAccount(int account_number){

 if (account_number >= 901 && account_number <= 950)
 {
    accountArr[account_number-901][ACCOUNT_NUM_C] = 0;
    accountArr[account_number-901][AMOUNT_C] = 0;

    printf("Your acount is closed \n");
}else{
         printf( "ERROR Not a valid account number \n");
    }
}

void interest( double interest_rate){
    
     if (interest_rate > 0)
     {
       for (int i = 0; i <ROWS; i++)
        {
         if (accountArr[i][ACCOUNT_NUM_C] != 0)
         {
          accountArr[i][AMOUNT_C] +=  accountArr[i][AMOUNT_C] * (interest_rate / 100) ; 
         }
         } printAccount();
     }else
     {
         printf("ERROR - Rate has to be positive \n");
     }
}
void printAccount(){

      for (int i = 0; i <ROWS; i++)
    {
      if (accountArr[i][ACCOUNT_NUM_C] != 0){
         printf("Account number is: %d ", 901+i);
         ballance(901+i);
      }
    }
}
void closeAndExit(){
          for (int i = 0; i <ROWS; i++)
    {
       accountArr[i][ACCOUNT_NUM_C] = 0;
       accountArr[i][AMOUNT_C] = 0;
        
   }
    } 
