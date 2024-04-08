/*
 * check.c
 *
 *  Created on: Apr 3, 2024
 *      Author: Momen
 */

#include <stdio.h>

float num;

int main()
{
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num);

	if(num == 0)
	{
		printf("You entered zero.");
	}
	else if(num > 0)
	{
		printf("%0.2f is positive",num);
	}
	else
	{
		printf("%0.2f is negative",num);
	}
	return 0;
}
