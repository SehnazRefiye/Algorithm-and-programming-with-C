//A üssü B hesabý yapan program
#include<stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int A, B, i, result = 1;
	printf("Please enter a number: \n");
	scanf_s("%d", &A);
	printf("Please enter a number: \n");
	scanf_s("%d", &B);
	for (i = 1; i <= B; i++)
	{
		result = result * A;
	}
	printf("The result is: %d \n", result);
	system("pause");
	return 0;
}