/*
Name:Noah Kipkoech 
Reg no:PA106/G/28709/25
Description:program to find compound interest from user input data
*/
//pre-processor directive 
#include <stdio.h>//scanf (),printf ()

//main function 
int main() {

//variable declaration 
    int choice;

    // Display the menu
    printf("Select data bundle:\n");
    printf("1. 100MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB @ 350 KES\n");
    printf("4. 2GB @ 600 KES\n");

    // Ask the user for their choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Display selection and cost
    switch (choice) {
        case 1:
            printf("You selected 100MB. Cost = 50 KES\n");
            break;
        case 2:
            printf("You selected 500MB. Cost = 200 KES\n");
            break;
        case 3:
            printf("You selected 1GB. Cost = 350 KES\n");
            break;
        case 4:
            printf("You selected 2GB. Cost = 600 KES\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
    