//
/*
Name: Deborah Ondieki 
Date:6/10/2025
REG NO:PA1106/GG/29052/25
Description:Do while loop for b password system 
*/
#include <stdio.h>
#include <string.h>

int main() {
    char password[10];

    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "1234") != 0);

    printf("Access Granted\n");
    return 0;
}