/*
Name:Noah Kipkoech 
Reg no:PA106/G/28709/25
Description:program to prompt the user for input data
*/

//pre_proceser directive 
#include <stdio.h>//scanf (),printf ()

//main function 
int main() {
// variable declaration 
    float height;
    int idNumber;
    double BankBalance;
    char gender;

    // user prompt input
    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your ID number: ");
    scanf("%d", &idNumber);

    printf("Enter your bank balance (in KES): ");
    scanf("%lf", &BankBalance);

    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender); 

    // Display the entered information
    printf("\n--- Your Information ---\n");
    printf("Height: %.2f m\n", height);
    printf("ID Number: %d\n", idNumber);
    printf("Bank Balance: KES %.2f\n", BankBalance);
    printf("Gender: %c\n", gender);

    return 0;
}