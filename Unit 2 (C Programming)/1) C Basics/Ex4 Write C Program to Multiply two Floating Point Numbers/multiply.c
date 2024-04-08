/*
 * multiply.c
 *
 *  Created on: Mar 31, 2024
 *      Author: Momen
 */

#include <stdio.h>

float a, b, sum;

int main()
{
	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&a,&b);

	sum = a * b;
	printf("sum: %f",sum);
	return 0;
}
