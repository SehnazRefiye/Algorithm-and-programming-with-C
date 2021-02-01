//ödev5 perfect number
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i, x, y, n, sum;
	printf("Please enter lower boundry: \n");
	scanf_s("%d", &x);
	printf("Please enter upper limit: \n");
	scanf_s("%d", &y);
	printf("All perfect numbers between x to y: \n");
	for (n = x; n < y; n++)
	{
		sum = 0;
		for (i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				sum = sum + i;
			}
		}
		if (sum == n)
		{
			printf("%d \n", n);
		}
	}
	system("pause");
	return 0;
}