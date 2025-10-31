/*
Name: Deborah Ondieki 
Reg no:PA106/G/29052/29
Description:1D array of revenue tracker
*/

#include <stdio.h>

int main() {
    float revenue[7], total = 0, average;
    int i;

    for(i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7;

    printf("\nTotal weekly revenue: %.2f", total);
    printf("\nAverage daily revenue: %.2f\n", average);

    return 0;
}