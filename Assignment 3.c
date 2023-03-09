/*
DESCRIPTION: Programming Excerise Three
CLASS: COSC 1420.SO1
AUTHOR: TYLER ECHOLS
DATE: Feb 2019
*/ 

#pragma warning (disable:4996)

#include <stdio.h>

int main()
{
	char	X;
	long	L1;
	long	L2;
	long	L3;

	printf("Enter two whole numbers: ");
	scanf("%d %d", &L1, &L2);
	if (L1 == L2)	
		printf("%d is the same as %d\n", L1, L2); 
	else
		printf("%d is not the same as %d\n", L1, L2); 
	printf("This is done whether the test was true or false\n");

	if (L1 > L2)
		printf("%d is greater than %d\n", L1, L2);

	else;	

	printf("Enter three whole numbers: ");
	scanf("%d %d %d", &L1, &L2, &L3);
	if (L1 > L2)
		if (L1 > L3)
		{	
			printf("%d is the largest value\n", L1);
			printf("Another thing to do\n");
		}
		else
			printf("%d is the largest value\n", L3);
	else
		if (L2 > L3)
		{	
			printf("%d is the largest value\n", L2);
		}
		else
			printf("%d is the largest value\n", L3);

	if ((L1 > L2) && (L1 > L3))	
		printf("%d is the largest value\n", L1);
	else
		printf("Cannot tell which number is larger\n");



	scanf("%c", &X);

	printf("Press enter to continue");
	scanf("%c", &X);
}