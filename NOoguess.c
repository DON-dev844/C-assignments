//
/*
Name: Deborah Ondieki 
Date:6/10/2025
REG NO:PA1106/GG/29052/25
Description:while loop for number guessing game
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(0));          // Seed random number
    secret = rand() % 20 + 1; // Random number between 1 and 20

    do {
        printf("Enter your guess (1-20): ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret)
            printf("Too high!\n");
        else if (guess < secret)
            printf("Too low!\n");
        else
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);

    } while (guess != secret);

    return 0;
}