/*
NAME: Ondieki Deborah 
REG NO: PA106/29052/25
Date: 1/110/2025
DESCRIPTION:A PROGRAM FOR MOBILE DATA PURCHASE
*/
#include <stdio.h>
int main()
{
	int choice;
	printf("\nSelect your choice");
	printf("\n1. 100MB @ 50 KES");
	printf("\n2. 500MB @ 200 KES");
	printf("\n3. 1GB   @ 350 KES");
	printf("\n4. 2GB   @ 600 KES");
	printf("\nEnter your choice 1-4: ");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		printf("\nYou selected 100MB cost=50 KES");
		break;
	case 2:
		printf("\nYou selected 500MB cost=200 KES");
		break;
    case 3: 
       printf("\nYou selected 1GB cost=350 KES");
       break;
    case 4:
    	printf("\nYou selected 2GB cost=600 KES");
    	break;
	default:
		printf("\nInvalid choice");
		
	}
	return 0;
}