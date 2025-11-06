/*
Name: Noah kipkoech 
Reg no:PA101/G/28709/25
Description: program that:
i. Reads all transactions from the file.
ii. Calculates and displays the total sales for the day.
iii. Ensures the file is properly closed after reading.
*/
//Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

void calculateTotalSales(const char *filename);//function prototype 

int main() {
    // Pre-setup
    //existing file
    FILE *setupFile = fopen("sales.txt", "w");
    if (setupFile == NULL) {
        perror("Error creating dummy file");
        return 1;
    }
    // Write sample sales amounts
    fprintf(setupFile, "15.50\n");
    fprintf(setupFile, "100.00\n");
    fprintf(setupFile, "45.75\n");
    fprintf(setupFile, "12.00\n");
    fclose(setupFile);

    //funtion call
    calculateTotalSales("sales.txt");
    return 0;
}

 // Reads all sales transactions from a text file, calculates the total, and displays it.
 
 
void calculateTotalSales(const char *filename) {
    FILE *filePointer = NULL; 
    double transactionAmount;
    double totalSales = 0.0;
    int count = 0;

    // 1. Open the file in 'read' mode 
    filePointer = fopen(filename, "r");

    // Check for file opening error
    if (filePointer == NULL) {
        perror("Error opening sales file");
        return; // Exit function if file can't be opened
    }

    // Reads all transactions from the file.
    printf("Processing sales transactions...\n");
    while (fscanf(filePointer, "%lf", &transactionAmount) == 1) {
        totalSales += transactionAmount; // Add the read amount to the total
        printf("Transaction %d: %.2lf\n", ++count, transactionAmount);
    }

    // Check if the loop ended 
    if (ferror(filePointer)) {
        perror("Error reading from sales file");
    }

    //Calculates and displays the total sales for the day.
    printf("\n   Daily Sales Summary    \n");
    printf("Total number of transactions: %d\n", count);
    printf("Total Sales for the day:   Ksh%.2lf  \n", totalSales);

    //Ensures the file is properly closed after reading.
    if (filePointer != NULL) {
        fclose(filePointer);
        printf("\n\nFile '%s' successfully closed.\n", filename);
    }
}
