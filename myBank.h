#define N 50
#include <stdbool.h>

int accounts[N][2];

void openAccount(int accoutNumber, double initialDeposit);
double balance(int accountNumber);
double deposit(int accountNumber, double amount); //Adds the amount and print the total balance
double withdraw(int accountNumber, double amount);
void closeAccount(int accountNumber);
void incInterest(double interest);
void printAccounts();
void exit(); //Clears and kills the program.