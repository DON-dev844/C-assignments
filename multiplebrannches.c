/*
Name: Ondieki Deborah 
Reg no: PA106/G/29052/25
Description:a program to display a 3 array of room occupied in multiple branches 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    srand(time(0));

    for(branch = 0; branch < 3; branch++) {
        for(floor = 0; floor < 5; floor++) {
            for(room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if(chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    printf("Total occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}