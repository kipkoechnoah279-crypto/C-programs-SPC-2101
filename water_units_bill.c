/*
Name:Noah Kipkoech 
Reg no:PA106/G/28709/25
Description:program to calculate the bill amount paid for water consumption by the user
*/
//pre-processor directive 
#include <stdio.h>//scanf(),printf ()

//main function 
int main() {

//variable declaration 
    int water_units;
    float bill;
    
    // Get input from the user
    printf("Enter the number of water units:");
    scanf ("%d",&water_units);
    
    if (water_units<=30)
    {
    bill=water_units *20;
    }
    
    else if (water_units <=60)
    {
    bill=water_units *25;
    }
    else 
    {
    bill=water_units *30;
    }
    
    printf ("\nTotal water bill is: KES %.2f",bill);
    
    return 0;
}
    