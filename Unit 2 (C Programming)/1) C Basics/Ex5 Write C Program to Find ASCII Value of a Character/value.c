/*
 * value.c
 *
 *  Created on: Mar 31, 2024
 *      Author: Momen
 */

#include <stdio.h>

char x;

int main()
{
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);

	printf("ASCII value of %c = %d",x,x);
	return 0;
}
