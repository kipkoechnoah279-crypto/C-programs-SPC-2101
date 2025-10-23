/*
Name :Noah Kipkoech 
Reg no:PA106/G/28709/25
Description:program to calculate fare by taking distance as input and returns the total fare
*/

//preprocessor directive 
#include<stdio.h>//scanf (),printf ()


int CalculateFare(int distance)
{
int totalfare=distance*50;

return totalfare;
}
//main function 
int main()
{
int distance, totalfare;
printf ("Enter distance you travelled:");
scanf("%d",&distance);

totalfare =distance *50;

printf ("Your totalfare is:%d",totalfare);

return 0;
}