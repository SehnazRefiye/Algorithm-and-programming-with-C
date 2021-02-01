//kullanýcýnýn girdiði iki sayý arasýndaki sayýlarý toplayan program
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i, sum = 0, x1, x2;
	printf("Please enter first number: \n");
	scanf_s("%d", &x1);
	printf("Please enter second number: \n");
	scanf_s("%d", &x2);
	if (x1 < x2)
	{
		for (i = x1 + 1; i < x2; i++)
		{
			sum = sum + i;
		}
	}
	else
	{
		for (i = x2 + 1; i < x1; i++)
		{
			sum = sum + i;
		}
	}
	printf("The sum of all integer numbers between %d and %d is: %d \n", x1, x2, sum);
	system("pause");
	return 0;
}