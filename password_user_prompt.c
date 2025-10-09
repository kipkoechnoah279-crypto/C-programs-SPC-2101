/*
Name:Noah Kipkoech 
Reg no:PA106/G/28709/25
Description:a program to prompt the user to enter password ustill correct one is entered 
*/

//preprocesser directive 
#include <stdio.h>//scanf (),printf ()
#include <string.h> // Necessary for string comparison (strcmp)

//main function 
int main() {
    // variable declaration 
    const char CORRECT_PASSWORD[] = "1234"; 
    
    char user_input[50]; 

    printf("Welcome to the login system.\n");

    do {
        printf("Please enter the password: ");
        
        scanf("%s", user_input);

        if (strcmp(user_input, CORRECT_PASSWORD) != 0) {
            printf("Incorrect password. Please try again.\n\n");
        }

    } while (strcmp(user_input, CORRECT_PASSWORD) != 0);

    printf("\nAccess Granted\n");

    return 0;
}
