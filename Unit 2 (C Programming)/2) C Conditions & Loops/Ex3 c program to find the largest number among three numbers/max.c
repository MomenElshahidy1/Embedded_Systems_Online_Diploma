/*
 * max.c
 *
 *  Created on: Apr 3, 2024
 *      Author: Momen
 */

#include <stdio.h>

float num1, num2, num3;
float max;

int main()
{
	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&num1,&num2,&num3);

	max = num1;

	if(num2 >= max)
	{
		max = num2;
	}

	if(num3 >= max)
	{
		max = num3;
	}

	printf("Largest number = %0.2f",max);
	return 0;
}
