//faktöriyel hesabý yapan program
#include<stdio.h>
#pragma warning (disable: 4996)
int main()
{
	int x, factorial = 1, i;
	printf("Please enter a number: \n");
	scanf_s("%d", &x);
	for (i = 1; i <= x; i++)
	{
		factorial = factorial * x;
		x = x - 1;
	}
	printf("The factorial is: %d \n", factorial);
	system("pause");
	return 0;
}