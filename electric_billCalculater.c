/*
Name:Noah Kipkoech 
Reg no:PA106/G/28709/25
Description:program to calculate electric bill taking input from the user and return bill amount based on units consumed 
*/

//preprocessor directive 
#include <stdio.h>//scanf (),printf ()

int calculateElectricBill(int units_consumed) {
    int total_bill = 0;
    int remaining_units = units_consumed;

    if (remaining_units > 200) {
        int units_in_slab3 = remaining_units - 200;
        total_bill += units_in_slab3 * 20;
        remaining_units = 200;
    }

    if (remaining_units > 100) {
        int units_in_slab2 = remaining_units - 100;
        total_bill += units_in_slab2 * 15;
        remaining_units = 100;
    }

    if (remaining_units > 0) {
        total_bill += remaining_units * 10;
    }

    return total_bill;
}

//main function 
int main() {
    int units1 = 250;
    int bill1 = calculateElectricBill(units1);
    
    int units2 = 80;
    int bill2 = calculateElectricBill(units2);

    int units3 = 150;
    int bill3 = calculateElectricBill(units3);

    printf("Consumption of %d units results in a bill of KSh. %d.\n", units1, bill1);
    printf("Consumption of %d units results in a bill of KSh. %d.\n", units2, bill2);
    printf("Consumption of %d units results in a bill of KSh. %d.\n", units3, bill3);

    return 0;
}
    