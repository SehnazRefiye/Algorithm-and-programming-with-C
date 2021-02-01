//girilen deðere kadar kullanýcýdan sayý alan ve alýnan sayýlarý toplayan program
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int counter, value, number, sum = 0;
	printf("Please enter a value: \n");
	scanf_s("%d", &value);
	for (counter = 1; counter <= value; counter++)
	{
		printf("Please enter a number: \n");
		scanf_s("%d", &number);
		sum = sum + number;
	}
	printf("The sum is: %d \n", sum);
	system("pause");
	return 0;
}