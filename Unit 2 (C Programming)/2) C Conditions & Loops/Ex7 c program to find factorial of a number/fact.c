/*
 * fact.c
 *
 *  Created on: Apr 3, 2024
 *      Author: Momen
 */

#include <stdio.h>

int i, n;
unsigned long long int sum = 1;

int main()
{
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	if(n<0)
	{
		printf("Error!!! Factorial of negative number doesn't exist");
	}
	else
	{
	for(i=1;i<=n;i++)
	{
		sum *= i;
	}
	printf("Factorial = %llu",sum);
	}
	return 0;
}
