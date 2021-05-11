#include <stdio.h>
unsigned long onHand = 5000, bankMoney, deposit, withdraw;
int choice, k;
char transaction = 'y';
void main()
{

    do
    {
        printf("\n\t-Welcome to ATM Service-\n");
        printf("[1] Withdraw Money\n");
        printf("[2] Deposit Money\n");
        printf("[3] Check Balance\n");
        printf("[0] Quit\n");
        printf("_____________________________\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf(" ONHAND MONEY: $%lu\n", onHand);
            printf(" BANK MONEY: $%lu\n", bankMoney);
            printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
            scanf("%lu", &withdraw);

            if (withdraw > bankMoney)
            {
                printf("\n INSUFFICENT BANK MONEY");
            }
            else
            {
                onHand += withdraw;
                bankMoney -= withdraw;
                printf("\n YOUR CURRENT ONHAND MONEY IS $%lu", onHand);
                printf("\n YOUR CURRENT BANK MONEY IS $%lu", bankMoney);
            }
            break;

        case 2:
            printf(" ONHAND MONEY: $%lu\n", onHand);
            printf(" BANK MONEY: $%lu\n", bankMoney);
            printf("\n ENTER THE AMOUNT TO DEPOSIT: $");
            scanf("%lu", &deposit);

            if (deposit > onHand)
            {
                printf(" INSUFFICIENT ONHAND MONEY");
                break;
            }
            else
            {
                onHand -= deposit;
                bankMoney += deposit;
                printf(" YOUR ONHAND MONEY IS $%lu", onHand);
                printf(" \n YOUR BANK MONEY IS $%lu", bankMoney);
            }
            break;
        case 3:
            printf("\n\tBALANCE\n");
            printf(" YOUR ONHAND MONEY IS: $%lu", onHand);
            printf("\n YOUR BANK MONEY IS : $%lu", bankMoney);
            break;

        case 0:
            printf("\n THANK FOR USING ATM");
            break;
        default:
            printf("\n INVALID CHOICE");
        }
        printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
        fflush(stdin);
        scanf("%c", &transaction);
        if (transaction == 'n' || transaction == 'N')
        {
            k = 1;
        }
    } while (!k);
    printf("\n\n THANKS FOR USING OUT ATM SERVICE");
}
