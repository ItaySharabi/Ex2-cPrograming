#include <stdio.h>
#include "myBank.h"

#define N 50


int main() {

    printf("Main\n");

    
    int isRunning = 1;
    double sum, interest;
    int accountNumber;

    while (isRunning)
    {
        char input;
        
        printf("Please choose transaction type: \n O - Open account\n B - Balance\n D - Deposit\n W - Withdraw\n C - Close account\n I - Interest\n P - Print\n C - Close\n");
        scanf("%s", &input);

        switch (input) 
        {
        case 'O':
            printf("Please enter amount for deposit:\n ");
            scanf("%0.2f", &sum);
            if (sum > 0) 
            {
                openAccount(sum);
            } else {
                printf("Invalid amount\n");
            }
            break;

        case 'B':
            printf("Please enter an account number: ");
            scanf("%d", &accountNumber);
            printf("Balance of account %d is: %0.2f \n", accountNumber, balance(accountNumber));
            break;

        case 'D':
            printf("Please enter an account number: ");
            scanf("%d", &accountNumber);
            printf("\nEnter amount to deposit: ");
            scanf("%0.2f", &sum);
            printf("New balance of account %d is: %0.2f \n", accountNumber, deposit(accountNumber, sum));
            break;

        case 'W':
            printf("Please enter an account number: ");
            scanf("%d", &accountNumber);
            printf("\nEnter amount to withdraw: ");
            scanf("%0.2f", &sum);
            printf("New balance of account %d is: %0.2f \n", accountNumber, withdraw(accountNumber, sum));
            break;
        
        case 'C':
            printf("Please enter your account number: ");
            scanf("%d", &accountNumber);
            closeAccount(accountNumber);
            printf("\n");
            break;

        case 'I':
            printf("Enter interest amount: ");
            scanf("%0.2f", &interest);
            incInterest(interest);
            break;

        case 'P':
            printf("All accounts: \n");
            printAccounts();
            break;
        case 'E':
            isRunning = 0;
            exit();
            break;
        default:
        printf("Invalid transaction type!\n");
            break;
        }

    }
    return 0;
}