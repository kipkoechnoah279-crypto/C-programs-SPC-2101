/*
Name:Noah Kipkoech 
Reg no:PA106/G/28709/25
Description:program to calculate electric bill by taking units consumed from the user 
*/
//pre-processor directive 
#include <stdio.h>//scanf (),printf ()

int calculateElectricBill(int unitsConsumed) {
    int totalBill = 0;

    if (unitsConsumed <= 100) {
        totalBill = unitsConsumed * 10;
    } else {
        totalBill += 100 * 10;
        int remainingUnits = unitsConsumed - 100;

        if (remainingUnits <= 100) {
            totalBill += remainingUnits * 15;
        } else {
            totalBill += 100 * 15;
            remainingUnits -= 100;

            totalBill += remainingUnits * 20;
        }
    }

    return totalBill;
}
//main function 
int main() {
    int units;
    int billAmount;

    printf("Enter the number of units consumed: ");

    if (scanf("%d", &units) != 1 || units < 0) {
        printf("Invalid input. Please enter a positive whole number.\n");
        return 1;
    }

//function call
    billAmount = calculateElectricBill(units);

    printf("Units Consumed: %d\n", units);
    printf("Total Bill Amount: KSh. %d\n", billAmount);
    
    return 0;
}
    