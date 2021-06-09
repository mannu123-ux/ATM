
// c program to display the ATM Transaction.
#include<stdio.h>

unsigned long amount = 1000, deposit , withdraw;
int choice,pin,k;
char transaction = 'y';

int main()
{
    while(pin!=1520)
    {
        printf("ENTER YOUR SECRET PIN NUMBER : ");
        scanf("%d",&pin);
        if(pin != 1520)
        {
            printf("PLEASE ENTER VALID PASSWORD\n");
        }
    }

    do
    
    {
        printf("**************************WELCOME TO ATM SERVICE****************************************\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Case\n");
        printf("3. Deposit Case\n");
        printf("4. Quit\n");
        printf("******************************************************************************************\n\n");
        printf("Enter your choice : \n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        printf("\n YOUR BALANCE IN RS : %lu", amount);
        case 2:
                printf("\n ENTER THE AMOUNT TO WITHDRAW : \n");
                scanf("%lu",&withdraw);
                if(withdraw%100 != 0)
                {
                    printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLE OF 100\n");
                }

                else if(withdraw>(amount-500))
                {
                    printf("\n INSUFFICENT BALANCE\n");
                }

                else{
                    amount = amount-withdraw;
                    printf("\n\n PLEASE COLLECT CASH\n");
                    printf("\n \n YOUR CURRENT BALANCE IS %lu",amount);
                }

                break;

            case 3:
             
                   printf("\n ENTER THE AMOUNT TO DEPOSITE\n");
                   scanf("%lu", &deposit);

                   amount = amount+deposit;

                   printf("YOUR BALANCE IS %lu \n",&amount);
                   break;

            case 4:
                    
                    printf("\n THANK U USING ATM \n");
                    break;
                    
            default :
            printf("\n INVALID CHOICE\n");        
        }

        printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION ? (y/n) : \n");

        fflush(stdin);

        scanf("%c", &transaction);
        if(transaction=='n'||transaction=="N")
        {
            k=1;
        }
    }
    while(!k);
    
        printf("\n\n THANKS FOR USING OUT ATM SERVICE\n");
    

    return 0;
         
    
}