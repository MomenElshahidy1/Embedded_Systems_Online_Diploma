/*
 * add.c
 *
 *  Created on: Mar 31, 2024
 *      Author: Momen
 */

#include <stdio.h>

int a, b, sum;

int main()
{
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&a,&b);

	sum = a + b;
	printf("sum: %d",sum);
	return 0;
}
