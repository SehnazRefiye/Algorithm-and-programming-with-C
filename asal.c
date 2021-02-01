//girilen sayýnýn asal sayý olup olmadýðýný gösteren program
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int number, i, IsPrime = 1;
	printf("Please enter a number: \n");
	scanf_s("%d", &number);
	for (i = 2; i <= number / 2; i++)
	{
		if (number % i == 0)
		{
			IsPrime = 0;
			break;
		}
	}
	if (IsPrime == 1)
	{
		printf("The number is a prime number. \n");
	}
	else
	{
		printf("The number is not a prime number. \n");
	}
	system("pause");
	return 0;
}