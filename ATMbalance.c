//
/*
Name: Deborah Ondieki 
Date:6/10/2025
REG NO:PA1106/GG/29052/25
Description:A while loop for ATM program
*/
#include <stdio.h>

int main() {
    float balance, amount;

    printf("Enter initial balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);

        balance -= amount;

        if (balance > 0)
            printf("Remaining balance: %.2f\n", balance);
        else
            printf("Insufficient funds! Balance is now %.2f\n", balance);
    }

    return 0;
}