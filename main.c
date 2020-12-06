#include <stdio.h>
#include "myBank.h"

#define N 50

int main()
{

    int isRunning = 1;
    double sum, interest;
    int accountNumber;
    char input;
    while (isRunning)
    {
        // printf("input = %c\n", input);

        printf("Please choose transaction type: \n O - Open account\n B - Balance\n D - Deposit\n W - Withdraw\n C - Close account\n I - Interest\n P - Print\n E - Exit\n");
        scanf(" %c", &input);

        switch (input)
        {

        default:
            printf("Invalid transaction type!\n");
            break;
        case 'O':
            printf("Please enter amount for deposit:\n ");
            // scanf(" %lf", &sum);
            if (scanf(" %lf", &sum) == 1)
            {
                if (sum > 0)
                {
                    openAccount(sum);
                }
                else
                {
                    printf("Invalid amount\n");
                }
            }
            else
            {
                printf("Invalid sum");
            }

            break;

        case 'B':
            printf("Please enter an account number: ");
            if (scanf(" %d", &accountNumber) == 1)
            {
                printf("Balance of account %d is: %lf \n", accountNumber, balance(accountNumber));
            }
            else
            {
                printf("Invalid account number");
            }
            break;

        case 'D':
            printf("Please enter an account number: ");
            if (scanf(" %d", &accountNumber) == 1)
            {
                printf("\nEnter amount to deposit: ");
                if (scanf(" %lf", &sum) == 1.0)
                {
                    printf("New balance of account %d is: %lf \n", accountNumber, deposit(accountNumber, sum));
                }
                else
                {
                    printf("Invalid sum to deposit");
                }
            }
            else
            {
                printf("Invalid account number");
            }
            break;

        case 'W':
            printf("Please enter an account number: ");
            if (scanf(" %d", &accountNumber) == 1)
            {
                printf("\nEnter amount to withdraw: ");
                if (scanf(" %lf", &sum) == 1)
                {
                    withdraw(accountNumber, sum);
                }
                else
                {
                    printf("Invalid sum to withdraw");
                }
            }
            else
            {
                printf("Invalid account number");
            }
            break;

        case 'C':
            printf("Please enter your account number: ");
            if (scanf(" %d", &accountNumber) == 1)
            {
                closeAccount(accountNumber);
                printf("\n");
            }
            else
            {
                printf("Invalid account number");
            }
            break;

        case 'I':
            printf("Enter interest amount: ");
            if (scanf(" %lf", &interest) == 1)
            {
                incInterest(interest);
            }
            else
            {
                printf("Invalid interest amount");
            }
            break;

        case 'P':
            printf("All accounts: \n");
            printAccounts();
            break;
        case 'E':
            isRunning = 0;
            exit();
            break;
        }
        printf("\n");
    }
    return 0;
}