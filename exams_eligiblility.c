/*
Name:Noah Kipkoech 
Reg no:PA106/G/28709/25
Description:program to display exam eligibility according to attendance and averagemarks 
*/

//pre-processor directive 
#include <stdio.h>//scanf (),printf ()

//main function 
int main() {
 
 //variable declaration  
    int attendance;          
    int average_marks;  
    
    //prompt the user to enter input data
    printf("Enter your attendance in percentage:");
    scanf("%d", &attendance);

    printf("Enter your average marks:");
    scanf("%d", &average_marks);

    if (attendance>= 75 &&average_marks>=40) {
        
    printf("\nEligible.");
    }
     else 
     {
    printf("\nNot eligible.");
    }
    
    return 0; 
}
    