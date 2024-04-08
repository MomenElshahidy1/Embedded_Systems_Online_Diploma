/*
 * swap.c
 *
 *  Created on: Apr 3, 2024
 *      Author: Momen
 */

#include <stdio.h>

float a,b,temp;

int main()
{
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter a value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);

	temp = a;
	a = b;
	b = temp;

	printf("\nAfter swapping, value of a = %0.2f\n",a);
	printf("After swapping, value of b = %0.2f",b);
	return 0;
}
