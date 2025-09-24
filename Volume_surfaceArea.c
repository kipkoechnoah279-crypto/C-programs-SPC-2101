/*
Name:Noah Kipkoech
Reg no:PA106/G/28709/25
Description:program to prompt the user to input for
radius and height to find volume and surface area
*/

//Pre-processor directive 
#include <stdio.h>//scanf (),printf ()

//main function 
int main() {
    // variable declaration 
    double radius;      
    double height;
    double volume;      
    double surfaceArea;
    float PI=3.142;
    //prompt user to input for radius and height
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    volume = PI * radius * radius * height;

    surfaceArea = 2 * PI * radius * radius+2*PI*radius*height;

    printf("\nCylinder's Volume: %.2f\n", volume);
    printf("Cylinder's Surface Area: %.2f\n", surfaceArea);

    return 0;
}
    