/*
Name:Noah Kipkoech 
Reg no:PA106/G/28709/25
Description:a program to prompt the user to enter their withdrawals and display balance 
*/

//preprocesser directive 
#include <stdio.h>//scanf (),printf ()

//main function 
int main() {

//variable declaration 
    double balance = 1000.00;
    double withdrawal_amount;

    printf("Welcome to the ATM simulation!\n");
    printf("Your starting balance is: Ksh%.2f\n\n", balance);

    while (balance > 0.0) {
        printf("Current Balance: Ksh%.2f\n", balance);
        printf("Enter amount to withdraw (or 0 to quit): Ksh");

        if (scanf("%lf", &withdrawal_amount) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        if (withdrawal_amount == 0.0) {
            printf("\nThank you for using the ATM. Session ended.\n");
            break;
        }

        if (withdrawal_amount < 0.0) {
            printf("Invalid amount. Withdrawal must be a positive number.\n\n");
            continue;
        }
        
        if (withdrawal_amount > balance) {
            printf("Insufficient funds! You can only withdraw up to Ksh%.2f\n\n", balance);
            continue;
        }

        balance = balance - withdrawal_amount;
        
        printf("Withdrawal successful. Your new balance is: Ksh%.2f\n\n", balance);
    }

    if (balance <= 0.0) {
        printf("\n-------------------------------------------\n");
        printf("Account Overdrawn or Empty!\n");
        printf("Your final balance is: Ksh%.2f\n", balance);
        printf("You cannot make any further withdrawals.\n");
        printf("-------------------------------------------\n");
    }

    return 0;
}
