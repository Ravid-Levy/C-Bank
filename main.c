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
    char check[2];
    int account;
    double acc;
    double amount;
    size_t length;
    /*
     rows: number of the bank account, activ/disactive acount, anount of money in the account, interest of the acount.
     */
  
    printf("In this program you can do the folloeing function by anter the following char:\n");
    printf("O - open new account.\n");
    printf("B - check the amount of money in the acoount.\n");
    printf("D - add money from the acount.\n");
    printf("W - take money from the acount.\n");
    printf("C - close the acount.\n");
    printf("I - add interest to the acount.\n");
    printf("P - print al the active acount.\n");
    printf("E - Exit the program\n");

    

    while(1)
    {
        
        printf("\n Enter transaction type:");
        //scanf("%c", &x);
        //fflush(stdin);
        scanf("%s",check);
        fflush(stdin);
        length = strlen(check);
        
        if(length==1)
        {
            x=check[0];
        }
        else
        {
            x='n';
        }

        switch (x) {
            case 'E':
                printf("\n Bye!!!! \n");
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
                printf("\n Enter the number of the bank acount:");
                scanf("%lf", &acc);
                fflush(stdin);
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
                    CloseAcount(account);
                }
                break;
            case 'W':
                
                printf("\n Enter the number of the bank acount:");
                scanf("%lf", &acc);
                fflush(stdin);
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
                    printf("\n How much to WIDTHDRAW?????? \n");
                    scanf("%lf", &amount);
                    TakeMoney(account,amount);
                    fflush(stdin);
                }
                break;
            case 'D':
                printf("\n Enter the number of the bank acount:");
                scanf("%lf", &acc);
                fflush(stdin);
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
                    fflush(stdin);
                }
                break;
            case 'B':
                printf("\n Enter the number of the bank acount:");
                scanf("%lf", &acc);
                fflush(stdin);
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
                    OpenAccount(account);
                break;
            case 'n':
                printf("\n the value is more than one char! Dont fake us! \n");
                break;
            default:
                printf("\n it dont valid input. you need to write just one of the letters above. \n");
                break;
        }
        
        
        


     

    }
    return 0;
}

