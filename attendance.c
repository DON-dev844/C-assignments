//HELLO WORLD 
/*
Name:
REG NO:PA106/G/29052/25
Date:1/10/2025
*/

#include<stdio.h>
int main(){
    int  attendance,marks;
    printf("\nenter your attendance : ");
    scanf("%d",&attendance);
    printf("\nenter your marks: ");
    scanf("%d",&marks);
    if(attendance>=75&&marks>=40){
     printf("you are eligible for final exams");
     }
     else
     {
     printf("you are not eligible for final exams");
     }
     return 0;
 }    