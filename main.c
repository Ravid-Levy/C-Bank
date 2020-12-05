#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "myBank.h"



int main(){
    char x;
    int account;
    double amount;
    /*
     rows: number of the bank account, activ/disactive acount, anount of money in the account, interest of the acount.
     */
  
    while(1)
    {
        
        printf("\nPlease choose a transaction type: \n");
        printf(" O-Open Account\n");
        printf(" B-Balance Inquiry\n");
        printf(" D-Deposit\n");
        printf(" W-Withdrawal\n");
        printf(" C-Close Account\n");
        printf(" I-Interest\n");
        printf(" P-Print\n");
        printf(" E-Exit\n");
        scanf("%c", &x);
        switch (x) {
            case 'E':
                closeall();
                exit(0);
                break;
            case 'P':
                popened();
                break;
            case 'I':
                addprime();
                break;
            case 'C':
                  printf("Please enter account number:");
              
                if(  scanf("%d", &account)==0)
                {
                    printf(" Failed to read the account number \n");
                    continue;
                }
              if(account>950 || account<901)
                {
                    printf(" Invalid account number \n");
                    continue;
                }
                else
                {
                    CloseAcount(account);
                }
                break;
            case 'W':
                printf("Please enter account number:");
                if(  scanf("%d", &account)==0)
                {
                    printf(" Failed to read the account number \n");
                    continue;
                }
                if(account>950 || account<901)
                {
                    printf(" Invalid account number \n");
                    continue;
                }
                else
                {
                    TakeMoney(account);

                }
                break;
            case 'D':
              printf("Please enter account number:");
                if(  scanf("%d", &account)==0)
                {
                    printf(" Failed to read the account number \n");
                    continue;
                }
               if(account>950 || account<901)
                {
                    printf(" Invalid account number \n");
                    continue;
                }
                else
                {
                    AddMoney(account);
                }
                break;
            case 'B':
                printf("Please enter account number:");
                if(  scanf("%d", &account)==0)
                {
                    printf(" Failed to read the account number \n");
                    continue;
                }
                 if(account>950 || account<901)
                {
                    printf(" Invalid account number \n");
                    continue;
                }
                else
                {
                    CeckAccount(account);
                }
                break;
            case 'O':
                    OpenAccount();
                    break;
            default:
                printf(" Invalid transaction type \n");
                break;
        }
        
        
        


     

    }
    return 0;
}

