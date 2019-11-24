#include <stdio.h>
#include <stdbool.h>
#include "myBank.h"
#define ROWS 50
#define COLUMMS 2
#define ACCOUNT_NUM_C 0        // C STANDS FOR COLUMNS
#define AMOUNT_C 1               // C STANDS FOR COLUMNS

double accountArr [ROWS][COLUMMS];


void openAccount (int amount){

  if (amount >= 0)
  {
    int flag = 0;
    for (int i = 0; i <ROWS && flag==false; i++)
        {
        if (accountArr[i][ACCOUNT_NUM_C] == 0){
            accountArr[i][ACCOUNT_NUM_C] = 1;   
            flag = 1;  
            accountArr[i][AMOUNT_C] = amount;
            printf("Account number is: %d",901+i);
        }
        }  
        if (flag == 0){
            printf("there is no room for your account have a great day");
        }
  }else
  {
      printf("Please enter an amount thats positive");
  }
  
}

void ballance (int account_number){

    if (account_number >= 901 && account_number <= 950)
    {
        if (accountArr[account_number-901][ACCOUNT_NUM_C] == 0)
         {
            printf("Your acount is closed");
         }else{
            printf("Your ballance is: %.2lf \n", accountArr[account_number-901][AMOUNT_C]);
         }
    }else{
            printf(" Not a valid number");
         }
}
void deposit(int account_number, int amount){

    if (account_number >= 901 && account_number <= 950 && amount >= 0)
    {    
        if (accountArr[account_number-901][ACCOUNT_NUM_C] == 0)
        {
            printf("Your acount is closed");
        }else
        {
                accountArr[account_number-901][AMOUNT_C] += amount;
                printf("Your ballance is: %.2lf", accountArr[account_number-901][AMOUNT_C]);
        }
    }else{
        printf( "Not a valid number");
         }  
}
void withdrawal(int account_number, double amount){
    
    if (account_number >= 901 && account_number <= 950)
    {
        if (accountArr[account_number-901][ACCOUNT_NUM_C] == 0)
        {
            printf("Your acount is closed");
        } 
        else if ( accountArr[account_number-901][AMOUNT_C] > amount && amount >= 0)
            {
                    accountArr[account_number-901][AMOUNT_C] -= amount;
                    printf("Your ballance is: %.2lf", accountArr[account_number-901][AMOUNT_C]);
            } 
            else if (accountArr[account_number-901][AMOUNT_C] == amount)
            {
                    accountArr[account_number-901][AMOUNT_C] = 0;
                    printf("**Warning** Your ballance is now empty");
            }
            else{
                  printf("Not enough funds in your balance");
                }
    }
    else {
           printf( "Not a valid number");
         }
}

void closeAccount(int account_number){

 if (account_number >= 901 && account_number <= 950)
 {
    accountArr[account_number-901][ACCOUNT_NUM_C] = 0;
    accountArr[account_number-901][AMOUNT_C] = 0;

    printf("Your acount is closed");
}else{
         printf( "Not a valid account number");
    }
}

void interest( double interest_rate){
    
       for (int i = 0; i <ROWS; i++)
    {
      if (accountArr[i][ACCOUNT_NUM_C] != 0)
      {
          accountArr[i][AMOUNT_C] +=  accountArr[i][AMOUNT_C] * (interest_rate / 100) ; 
         
      }
    } printAccount();
}
void printAccount(){

      for (int i = 0; i <ROWS; i++)
    {
      if (accountArr[i][ACCOUNT_NUM_C] != 0){
         printf("Account number is: %.2d ", 901+i);
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
