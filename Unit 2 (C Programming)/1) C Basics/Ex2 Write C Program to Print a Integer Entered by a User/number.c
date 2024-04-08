/*
 * number.c
 *
 *  Created on: Mar 31, 2024
 *      Author: Momen
 */

#include <stdio.h>

int num;

int main()
{
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("You entered: %d",num);
	return 0;
}
