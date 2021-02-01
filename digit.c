//read a positive integer number x, and then extracts and prints its digits one by one
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int value, digit;
	printf("Please enter a value: \n");
	scanf_s("%d", &value);
	while (value != 0)
	{
		digit = value % 10;
		value = value / 10;
		printf("%d \n", digit);
	}
	system("pause");
	return 0;
}