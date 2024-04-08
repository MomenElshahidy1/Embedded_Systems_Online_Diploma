/*
 * calculate.c
 *
 *  Created on: Apr 3, 2024
 *      Author: Momen
 */


#include <stdio.h>

char operator;
float num1, num2;

int main()
{
	printf("Enter operator either + or - or * or divide: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&operator);

	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&num1,&num2);

	switch(operator)
	{
	case '+':
		printf("%0.1f + %0.1f = %0.1f",num1,num2,num1+num2);
		break;
	case '-':
		printf("%0.1lf - %0.1f = %0.1f",num1,num2,num1-num2);
		break;
	case '*':
		printf("%0.1lf * %0.1f = %0.1f",num1,num2,num1*num2);
		break;
	case '/':
		printf("%0.1f / %0.1f = %0.1f",num1,num2,num1/num2);
		break;
	default:
		printf("Error! operator is not correct");
		break;
	}
}
