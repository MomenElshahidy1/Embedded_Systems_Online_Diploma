/*
 * check.c
 *
 *  Created on: Apr 3, 2024
 *      Author: Momen
 */

#include <stdio.h>

char c;

int main()
{
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);

	if((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
	{
		printf("%c is an alphabet.",c);
	}
	else
	{
		printf("%c is not an alphabet.",c);
	}
}
