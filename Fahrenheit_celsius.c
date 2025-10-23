/*
Name:Noah Kipkoech 
Reg no:PA106/G/28709/25
Description:program to convert temperature in Fahrenheit to degrees Celsius 
*/

//preprocessor directive 
#include <stdio.h>//scanf (),printf ()

double convertToCelsius(double fahrenheit) {
    double celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
    return celsius;
}

//main function 
int main() {
    double fahrenheit_input;
    double celsius_output;

//Ask the user to enter temperature value in fahrenheit
    printf("Enter the temperature in Fahrenheit (°F) to convert: ");

    if (scanf("%lf", &fahrenheit_input) != 1) {
        printf("Error: Invalid input. Please enter a numerical value.\n");
        return 1;
    }

    celsius_output = convertToCelsius(fahrenheit_input);

    printf("\n%.2f degrees Fahrenheit is equal to %.2f degrees Celsius.\n", 
           fahrenheit_input, 
           celsius_output);

    return 0;
}
