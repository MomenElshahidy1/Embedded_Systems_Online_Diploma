/*
 * swap.c
 *
 *  Created on: Apr 3, 2024
 *      Author: Momen
 */

#include <stdio.h>

float a, b;

int main()
{
	printf("Enter a value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter a value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("\nAfter swapping, value of a = %0.2f\n",a);
	printf("\nAfter swapping, value of b = %0.2f\n",b);
	return 0;
}
