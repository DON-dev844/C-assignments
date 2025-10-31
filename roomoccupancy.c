/*
Name: Ondieki Deborah 
Reg no :PA106/G/29052/25
Description:a program to display a 2D array room occupancy 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int floor, room, occupied, vacant;

    srand(time(0));

    for(floor = 0; floor < 5; floor++) {
        occupied = vacant = 0;
        for(room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // 0 or 1
            if(occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}