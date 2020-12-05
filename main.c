#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "myBank.h"

bool checkint(double val)
{
    int valint = (int)val;
    return (val == valint);
}

int main(){
    char x;
    int account;
    double acc;
    double amount;
    /*
     rows: number of the bank account, activ/disactive acount, anount of money in the account, interest of the acount.
     */
  
    while(1)
    {
        
        printf("\nPlease choose a transaction type: \n");
        printf(" O-Open Account.\n");
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
                printf("\n \n");
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
                printf("\nAccount number?: ");
                scanf("%lf", &acc);
                
                if(checkint(acc)==true)
                {
                    account = acc;
                }
                else
                {
                    printf("Transaction type?: ");
                    continue;
                }
                if(account>950 || account<901)
                {
                    printf("\n Account number?: \n");
                    continue;
                }
                else
                {
                    CloseAcount(account);
                }
                break;
            case 'W':
                
                printf("Please enter account number: ");
                scanf("%lf", &acc);
                
                if(checkint(acc)==true)
                {
                    account = acc;
                }
                else
                {
                    printf("The number is not valid. Operation Cancelled by system");
                    continue;
                }
                if(account>950 || account<901)
                {
                    printf("\n please enter number between 901-950. the operation cancelled by the system. \n");
                    continue;
                }
                else
                {
                    printf("\nlease enter the amount to withdraw: The new balance is: \n");
                    scanf("%lf", &amount);
                    TakeMoney(account,amount);

                }
                break;
            case 'D':
                printf("\n Enter the number of the bank acount:");
                scanf("%lf", &acc);
                if(checkint(acc)==true)
                {
                    account = acc;
                }
                else
                {
                    printf("The number is not valid. Operation Cancelled by system");
                    continue;
                }
                if(account>950 || account<901)
                {
                    printf("\n please enter number between 901-950. the operation cancelled by the system. \n");
                    continue;
                }
                else
                {
                    printf("\n How much to despoit?????? \n");
                    scanf("%lf", &amount);
                    AddMoney(account,amount);
                }
                break;
            case 'B':
                printf("\n Enter the number of the bank acount:");
                scanf("%lf", &acc);
                if(checkint(acc)==true)
                {
                    account = acc;
                }
                else
                {
                    printf("The number is not valid. Operation Cancelled by system");
                    continue;
                }
                if(account>950 || account<901)
                {
                    printf("\n please enter number between 901-950. the operation cancelled by the system. \n");
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
                printf("Invalid transaction type \n");
                break;
        }
        
        
        


     

    }
    return 0;
}

