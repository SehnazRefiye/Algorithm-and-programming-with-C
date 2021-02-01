//kullanýcý tarafýndan girilen iki sayý arasýndaki asal sayýlarý gösteren program
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i, x, y, j, IsPrime;
	printf("Please enter lower boundry: \n");
	scanf_s("%d", &x);
	printf("Please enter upper limit: \n");
	scanf_s("%d", &y);
	printf("All prime numbers between x to y: \n");
	for (j = x; j < y; j++)
	{
		IsPrime = 1;
		for (i = 2; i <= j / 2; i++)
		{
			if (j % i == 0)
			{
				IsPrime = 0;
				break;
			}
		}
		if (IsPrime == 1)
		{
			printf("%d \n", j);
		}
	}
	system("pause");
	return 0;
}