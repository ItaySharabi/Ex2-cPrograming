#include <stdio.h>
#include "myBank.h"
#define N 50
#define DEL 901
// N=50 , 2 means first for account deposit value number secound for 0/1 (if the account exist or not--> 0=doesn't exist , 1= exist)
double accounts[N][2];
static int times=0;
void openAccount(double initialDeposit) {
        printf("OpenAccount()");
        if(times<N){
            int acc=-1;
            for (int i = 0; i < N; i++)
            {
                  if(accounts[i][1]==0)
                  {
                    acc=i;
                    break;
                  }
            }
            if(acc!=-1){
                accounts[acc][0]=initialDeposit;
                printf("account created");
            }
        }
        else {
            printf("max accounts");
        }
}

double balance(int accountNumber) {
    int acc = DEL-accountNumber;
    
    return 0.0;
}

double deposit(int accountNumber, double amount){ 
    return 0.0;
}

double withdraw(int accountNumber, double amount) {
    return 0;
}

void closeAccount(int accountNumber) {
    
}

void incInterest(double interest) {

}
void printAccounts() {

}
void exit() {

}