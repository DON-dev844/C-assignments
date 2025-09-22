/*
Name: Deborah Ondieki
REG NO:PA106/G/29052/15
Description: prompt program
*/#include <stdio.h>

int main() {
    float height, bank_balance;
    int id_number, class_number ;

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your id_number: ");
    scanf("%d", &id_number);

    printf("Enter your ban_balance: ");
    scanf("%f", &bank_balance);

    printf("Enter your class number: ");
    scanf("d", class_number);

    printf("Height: %.2f meters\n", height);
    printf("ID_number: %d\n", id_number);
    printf("Bank Balance: %.2f\n", bank_balance);
    printf("class number: %d\n", class_number);

    return 0;
}