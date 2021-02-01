//girilen iki sayý arasýndaki sayýlarýn faktöriyelini alan ve aldýðý deðerleri toplayan program 
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A, B, i, j, factorial = 1;
	float result = 0, temp;
	printf("Please enter the first number: \n");
	scanf_s("%d", &A);
	printf("Please enter the second number: \n");
	scanf_s("%d", &B);
	for (i = 1; i <= B; i++)
	{
		factorial = factorial * i;
		temp = 1;
		for (j = 1; j <= i; j++)
		{
			temp = temp * A;
		}
		result = result + temp / factorial;
	}
	printf("The result is: %f \n", result);
	system("pause");
	return 0;
}
