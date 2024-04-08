/*
 * check.c
 *
 *  Created on: Apr 3, 2024
 *      Author: Momen
 */

#include <stdio.h>

int num;

int main()
{
	printf("Enter an integer you want to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	if(num < 0)
	{
		printf("Error,Please enter a positive number\n");
	}
	if(num % 2 != 0)
	{
		printf("%d is Odd",num);
	}
	else
	{
		printf("%d is even", num);
	}
	return 0;
}
