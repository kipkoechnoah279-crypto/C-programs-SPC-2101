/*
Name:Noah Kipkoech 
Reg no:PA106/G/28709/25
Description:program to display the user for input data for loan application 
*/

//pre-processor directive 
#include <stdio.h>//scanf (),printf ()

//main function 
int main() {
 
 //variable declaration  
    int age;          
    double income;  
    
    //prompt the user to enter input data
    printf("Please enter your age: ");
    scanf("%d", &age);

    printf("Please enter your annual income in shillings: ");
    scanf("%lf", &income);

    if (age >= 21 & income >= 21000 )
        
    printf("Congratulations, you qualify for a loan.\n");
     else 
    printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    
    return 0; 
}
    