/*
 * calculate.c
 *
 *  Created on: Apr 3, 2024
 *      Author: Momen
 */

#include <stdio.h>

int i, n, sum;

int main()
{
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		sum += i;
	}
	printf("Sum = %d",sum);
	return 0;
}
