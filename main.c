    #include "myBank.h"
    #include <stdio.h>
    #include <stdbool.h>

    int main(){

    char action;
    int flag = 0;
    int account_num;
    double amount;
    double interest_rate;

    printf("please insert a letter \n");
    printf(" O-open account \n B-ballance \n D-deposit \n W-withdrawal \n C-close account \n I-ineretst \n P print all \n E-close and exit \n");
    scanf(" %c",&action);

    while(flag == 0){

        switch (action){
        
            case 'O':
                printf("Enter amount \n");
                if (scanf(" %lf", &amount) == 1){
                    openAccount(amount);
                }else{
                    printf(" Not a valid number");
                }
                
                
            break;
        
            case 'B':
                printf("Enter account number  ");
                if (scanf(" %d", &account_num) == 1)
                {
                    ballance(account_num);
                   
                }else{
                    printf(" Not a valid number");
                     }
            break;
            
            case 'D':
                printf("enter account number ");
                if (scanf("\n %d", &account_num) == 1)
                {
                  printf("enter amount to deposit ");
                    if (scanf("\n %lf",  &amount) == 1)
                    {
                       deposit(account_num, amount);
                    }else
                    {
                        printf(" Not a valid number");
                    }
                }else{
                        printf(" Not a valid number");
                     }
            break;
            
            case 'W':
                printf("enter account number ");
                if (scanf("\n %d", &account_num) == 1)
                {
                  printf("enter amount to deposit ");
                    if (scanf("\n %lf",  &amount) == 1)
                    {
                       withdrawal(account_num, amount);
                    }else
                    {
                        printf(" Not a valid number");
                    }
                }else{
                        printf(" Not a valid number");
                     }
            break;

            case 'C' : 
                printf("Enter account number  ");
                if (scanf(" %d", &account_num) == 1)
                {
                   closeAccount(account_num);
                   
                }else{
                    printf(" Not a valid number");
                     }
            break;

            case 'I':        
               printf("Enter rate ");   
             if (scanf(" %lf", &interest_rate) == 1)
             {
                interest(interest_rate);
             }else
             {
                    printf(" Not a valid number");
             }

            break;

            case 'P':
            printAccount();
            break;

            case 'E':
            closeAndExit();
            flag = 1;
            break;
            
            default :
             printf("not a valid letter  \n");
            break;
        }
    if (flag == 0){    
    printf("\n please insert a letter  \n");
    printf(" O-open account \n B-ballance \n D-deposit \n W-withdrawal \n C-close account \n I-ineretst \n P print all \n E-close and exit \n");
    scanf(" %c",&action);
    }    
    }
        return 0;
}       