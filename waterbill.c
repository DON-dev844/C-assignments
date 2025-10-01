/*
Name:  Deborah Ondieki 
Reg no:PA106/G/29052/25
Date: 1/10/2025
Description :A program to calculate water bill
*/

#include<stdio.h>
int main(){
    float unit,bill;
    printf("Enter the consumed water unit: ");
    scanf("%f",&unit);
    if(unit<=30)
    
    printf("Total water bill %.2f" ,unit*20);
    
    else if(unit>30 && unit<=60)
    printf("Total water bill %.2f: " ,unit*25);  
    else
    printf("Total water bill %.2f:  " ,unit*30);
    }