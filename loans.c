/*
Name: Deborah Ondieki 
REG NO:PA106/29052/25
Description: program to ascertain and loan eligibility 
the bank offers a loan if the applicant:
     is above 21 years
     has an annual_income of at least ksh 21000
*/

#include <stdio.h>

int main() {

     //variable declaration 
     int age;
     float annual_income;
     
     //prompt the user to enter age
     printf("enter your age:");
     scanf("%d",&age);
     
     //prompt the user to enter the annual income 
     printf("enter your annual_income in ksh:");
     scanf("%f",& annual_income);
     
     //check eligibility 
     if (age>=21 & annual_income >=21000)
     printf("\ncongratulations you qualify for a loan.");
     printf("\nunfortunately, we are unable to offer you a loan");
     
return 0 ;;
}   