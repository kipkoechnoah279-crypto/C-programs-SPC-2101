/*
Name:Noah Kipkoech 
Reg no:PA106/G/28709/25
Description:program to find compound interest from user input data
*/
//pre-processor directive 
#include <stdio.h>//scanf(),printf ()

//main function 
int main() {

//variable declaration 
    float principal;
    float rate;
    float time;
    float compound_interest;
    float amount;
    
    // Get input from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    rate = rate / 100;

    amount = principal * pow((1 + rate), time);

    compound_interest = amount - principal;

    printf("\nCompound Interest: %.2f\n", compound_interest);

    return 0;
}
    