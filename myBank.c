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
     
         double a = BankAccount[loop][0];
         if(a==1)
         {
             double b = BankAccount[loop][1];
             printf("\n The balance of account number %d is: %lf",(loop+901),b);
         }
        
     
 }
    
}


/*
I - add interest money to the acount.
*/
void addprime()
{
    printf("Please enter interest rate: ");
    if(scanf("%lf", &amo)==0)
{
    printf("Failed to read the interest rate\n");
}
else
{
 int loop;
    if(amo<0)
    {
        printf("Invalid interest rate \n");
    }
    else
    {
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
    
    }
    
   
}

   
    
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
               printf(" Closed account number %d \n",number);
    }
    else
    {
        printf(" This account is already closed \n");
    }
    
    
    }

/*
W - take money from the acount.
*/
void TakeMoney (int number)
{

    /* code */
    if (BankAccount[(number - 901)][0] == 0)
    {
        printf(" This account is closed \n");
    }
    else
    {
        printf("\n please enter the amount to withdraw:");
        scanf("%lf", &amo);
    
          if(amo<0)
            {
                printf("Cannot deposit a negative amount \n");
            }
            else
            {
        if(BankAccount[(number-901)][1]>=amo)
        {
            
                 double balance = BankAccount[number-901][1];
                printf("\n old balance in account is - %lf \n",balance);
                BankAccount[number-901][2] = (balance-amo);
                printf("\n new balance in account is - %lf \n",(balance-amo));
            }
               else
        {
            printf("\n this account doesnt have the amount. \n");
        }
        }
     
      
    }
    
    
    
    
  
}





/*
 B - check the amount of money in the acoount.
 */
void CeckAccount (int number)
{
    if (BankAccount[(number - 901)][0] == 1)
    {
                    double balance = BankAccount[number-901][1];
                    printf("The balance of account number %d is: %lf \n", number,balance);
    }
    else
    {
        printf(" This account is closed \n");
    }
    
    
}


/*
 D - add money from the acount.
 */
void AddMoney (int number)
{
    int a = (number - 901);
    if(BankAccount[a][0]==1)
    {

        printf(" Please enter the amount to deposit: ");
    
        if (scanf("%lf", &amo))
        {

            if (amo > 0)
            {
                double bal = BankAccount[a][1];
                double nw = bal + amo;
                BankAccount[a][1] = nw;
                printf("The new balance is: %lf", nw);
            }
            else
            {
                printf("Cannot deposit a negative amount");
            }
}
else
{
    printf("Failed to read the amount\n");
}
    }
    else
    {
        printf(" This account is closed \n");
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
