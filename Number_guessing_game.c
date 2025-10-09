/*
Name:Noah Kipkoech 
Reg no:PA106/G/28709/25
Description:a program that implements a number guessing game
*/

//preprocesser directive 
#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time() 

//main function 
int main() {
//variable declaration 
    int secret_number;
    int guess = 0;
    int attempts = 0;

    // Seed the random number generator using current time
    srand(time(NULL)); 
    
    // Generate a number between 1 and 20 (inclusive)
    secret_number = (rand() % 20) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I've picked a secret number between 1 and 20. Try to guess it!\n\n");

    do {
        printf("Enter your guess: ");
        
        // Basic input 
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }
        
        // Increment the attempt 
        attempts++;

        // Provide hints
        if (guess > secret_number) {
            printf("Too high!\n");
        } else if (guess < secret_number) {
            printf("Too low!\n");
        }

    } while (guess != secret_number);

    // Display the final results
    printf("\n***********************************\n");
    printf("Congratulations! You guessed the secret number: %d\n", secret_number);
    printf("It took you %d attempts to guess correctly.\n", attempts);
    printf("***********************************\n");

    return 0;
}
