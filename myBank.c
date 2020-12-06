#include <stdio.h>
#include "myBank.h"
#define N 50
#define DEL 901
// N=50 , 2 means first for account deposit value number secound for 0/1 (if the account exist or not--> 0=doesn't exist , 1= exist)
double accounts[N][2];
void openAccount(double initialDeposit) {

	for(int i=0;i<N;i++){
		if(accounts[i][0]==0){
			accounts[i][0]=1.0;
			accounts[i][1]=initialDeposit;
			printf("Your account number is: %d \n",i+DEL);
			return;
		}
	}
printf("You cant open account because my bank is full \n");	
}

double balance(int accountNumber) {
    if(accounts[accountNumber-DEL][0]==1){
        return accounts[accountNumber-DEL][1];
	}else
		printf("This account number doesn't exist! \n");
    return 0.0;
}

double deposit(int accountNumber, double amount){ 
		
   	if(accounts[accountNumber-DEL][0]==1 && amount>0){
		accounts[accountNumber-DEL][1]+=amount;
		printf("your new balance is:%lf",accounts[accountNumber-DEL][1]);
		return accounts[accountNumber-DEL][1];
	}else
		printf("This account number doesn't exist or negative amount was add!");
    return 0.0;
}
double withdraw(int accountNumber, double amount) {

    	if(accounts[accountNumber-DEL][0]==1 && accounts[accountNumber-DEL][1]>=amount){
		    accounts[accountNumber-DEL][1]-=amount;
		    return accounts[accountNumber-DEL][1];
	}else
		printf("not enough money to withdrawal or worng account \n");
    return 0.0;
}

void closeAccount(int accountNumber) {
    if(accounts[accountNumber-DEL][0]==1){
		accounts[accountNumber-DEL][0]=0;
		accounts[accountNumber-DEL][1]=0;
		printf("your account is close \n");
	}else
		printf("This account number doesn't exist! \n");
}

void incInterest(double interest) {
for(int i=0;i<N;i++){
		if(accounts[i][0]==1){
			accounts[i][1]+=(accounts[i][1]*(interest/100));
		}
	}
}
void printAccounts() {
    for(int i=0;i<N;i++)
    {
	    if(accounts[i][0]==1){
		    printf("account number: %d balance: %0.2lf \n",i+DEL,accounts[i][1]);
	    }
    }
}
void closeAll() {
for(int i=0;i<N;i++){
		accounts[i][0]=0;
		accounts[i][1]=0.0;
	}
}