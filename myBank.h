#ifndef _MYBANK_H_
#define _MYBANK_H_
#define ROWS 50
#define COLUMMS 2
#define ACCOUNT_NUM_C 0           // C STANDS FOR COLUMNS
#define AMOUNT_C 1               // C STANDS FOR COLUMNS
#define firstAccount 901
#define lastAccount 950

extern double accountArr [ROWS][COLUMMS];


void openAccount (double amount);
void ballance (int account_number);
void deposit(int account_number, double amount);
void withdrawal(int account_number, double amount);
void closeAccount(int account_number);
void interest( double interest_rate);
void printAccount();
void closeAndExit();

#endif