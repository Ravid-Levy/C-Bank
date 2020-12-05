#include "myBank.h"
#include <stdio.h>

/*
P - print al the active acount.
 @param array adrres
 @param bank account
*/
double BankAccount[50][3];
double amo;



void popened()
{
    int loop;
    for(loop = 0; loop < 50; loop++)
 {
     
         int a = BankAccount[loop][0];
         if(a==1)
         {
             int b = BankAccount[loop][1];
             printf("\n The balance of account number %d is: %d \n",(loop+901),b);
         }
        
     
 }
    
}


/*
I - add interest money to the acount.
*/
void addprime()
{
    printf("how much prime to add:");
    scanf("%lf", &amo);
    int loop;
       for(loop = 0; loop < 50; loop++)
    {
        
            int a = BankAccount[loop][0];
            if(a==1)
            {
                double b = BankAccount[loop][1];
                double c = b*((100+amo)/100);
                BankAccount[loop][1]= c;
            }
           
        
    }
    
    printf("\n all account multiply %f",((100+amo)/100));
    
}


void closeall()
{
    
    int loop;
    int loop2;
       for(loop = 0; loop < 50; loop++)
    {
        for(loop2 = 0; loop2 < 3; loop2++)
     {
        if(BankAccount[loop][0]==1)
        {
            BankAccount[loop][0]=0.0;
            BankAccount[loop][1]=0.0;
        }
        
    }
    
    
}
    printf("\n All accounts are closed! \n");

}


/*
C - close the acount.
*/
void CloseAcount(int number)
{
           int a = number-901;
           if (BankAccount[a][0] == 1)
           {
               BankAccount[a][0] = 0;
               BankAccount[a][1] = 0;
               printf("\n The account closed succesfuly. \n");
    }
    else
    {
        printf("\n this account doesnt exists. \n");
          printf("a - %d", a);
    }
    
    
    }

/*
W - take money from the acount.
*/
void TakeMoney (int number, double amount)
{
    if(BankAccount[(number-901)][0]==1)
    {
        if(BankAccount[(number-901)][1]>=amount)
        {
            
            if(amount<0.0)
            {
                printf("\n the amount is in minus so fix it! \n");
            }
            else
            {
                 double balance = BankAccount[number-901][1];
                printf("\n old balance in account is - %lf \n",balance);
                BankAccount[number-901][2] = (balance-amount);
                printf("\n new balance in account is - %lf \n",(balance-amount));
            }
        }
        else
        {
            printf("\n this account doesnt have the amount. \n");
        }
      
    }
    else
    {
        printf("\n Account doesnt exists or you dont have money. \n");

    }
  
}





/*
 B - check the amount of money in the acoount.
 */
void CeckAccount (int number)
{
    printf("account - %d", number);
    if (BankAccount[(number - 901)][0] == 1)
    {
                    double balance = BankAccount[number-901][1];
        printf("\n ammount in account is - %lf \n",balance);
    }
    else
    {
        printf("number- %d",(number-901));
        printf("\n Account doesnt exists \n");
    }
    
    
}


/*
 D - add money from the acount.
 */
void AddMoney (int number, double amount)
{
    if(BankAccount[(number-901)][0]==1)
    {
        if(amount<0)
        {
            printf("Invalid Amount \n");
      
            
                }
        else
        {
            double balance = BankAccount[number-901][1];
            printf("\n old ammount in account is - %lf \n",balance);

            BankAccount[number-901][1]=(balance+amount);
            double bal = balance+amount;
            printf("\n new ammount in account is - %lf \n",bal);
            
        }
        
    }
    else
    {
        printf("/n Account doesnt exists /n");
    }
    
}

/*
O - open new account.
 */



void OpenAccount()
{
    int opn;
    for (opn = 0; opn < 50; opn++)
    {
        if (BankAccount[opn][0] == 0)
        {
            printf("Please enter amount for deposit: ");
            if(scanf("%lf", &amo)!=0)
            {
 if (amo < 0)
            {
                printf("Invalid Amount \n");
                break;
            }
            else
            {
                BankAccount[opn][0] = 1;
                double balance = BankAccount[opn][1];
                BankAccount[opn][1] = (balance + amo);
                printf("New account number is: %d \n", (opn + 901));
                break;
            }

            }
            else
            {
                printf("Failed to read the amount \n");
                break;
            }
            
           


      }
   }

     
}
