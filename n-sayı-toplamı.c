//1'den n'e kadar olan sayýlarýn toplamý
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x, i, sum = 0;
	printf("Please enter a number: \n");
	scanf_s("%d", &x);
	for (i = 1; i <= x; i++)
	{
		sum = sum + i;
	}
	printf("The sum is: %d \n", sum);
	system("pause");
	return 0;
}
