/*
Name :Noah kipkoech 
Reg no :PA106/G/28709/25
Description : a program that uses arrays to develop a simple system to monitor revenue and room occupancy 
*/

//preprocessor directives 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//main function 
int main() {
    // 1D Weekly Revenue Tracker 
    float revenue[7];
    float totalRevenue = 0, averageRevenue;
    char *days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    printf("    Weekly Revenue Tracker    \n");
    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for %s: ", days[i]);
        scanf("%f", &revenue[i]);
        totalRevenue += revenue[i];
    }

    averageRevenue = totalRevenue / 7;

    printf("\nTotal Weekly Revenue: %.2f\n", totalRevenue);
    printf("Average Daily Revenue: %.2f\n\n", averageRevenue);

    //2D  Room Occupancy (One Branch)
    int occupancy[5][10];
    int occupied, vacant;

    srand(time(0));

    printf("    Room Occupancy (One Branch)   \n");
    for (int floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;
   if (occupancy[floor][room] == 1)
                occupied++;
            else
       vacant++;
        }

        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    //3D
    int chain[3][5][10];
    int totalOccupied = 0;
printf("\n    Multiple Branches Occupancy   \n");

for (int branch = 0; branch < 3; branch++) {
        int branchOccupied = 0;
        for (int floor = 0; floor < 5; floor++) {
        for (int room = 0; room < 10; room++) {
    chain[branch][floor][room] = rand() % 2;
    if (chain[branch][floor][room] == 1)
      branchOccupied++;
            }
        }
        totalOccupied += branchOccupied;
        printf("Branch %d -> Total Occupied Rooms: %d\n", branch + 1, branchOccupied);
    }

    printf("\nTotal Occupied Rooms Across All Branches: %d\n", totalOccupied);

    return 0;
}