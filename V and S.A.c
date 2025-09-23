/*
Name: Deborah Ondieki
REG NO:PA106/G/229052/25
Description: program to find volume and surface area
volume=π*radius*radius*height
surface area=2π*radius*radius+2π*radius*height
*/

#include <stdio.h>
#define π=3.142

int main () {

    float radius,height,volume,surface_area ;

      // prompt the user to enter radius 
    printf("enter radius of the cylinder:");
    scanf("%f",& radius);

      //prompt the user to enter height 
    printf("enter height of the cylinder:");
    scanf("%f",& height);

      //calculate the volume and surface area 
    volume= 3.142*radius*radius *height ;

    surface_area=2*3.142*radius*radius+2*3.142*radius*height;

     // display the volume and surface area 
    printf("volume=%2f\n", volume);
    printf("surface_area=%2f\n", surface_area);

    return 0;
}