//seri toplamý
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int number;
	float sum = 0, i;
	printf("Please enter a pozitive integer number: \n");
	scanf_s("%d", &number);
	for (i = 1; i <= number; i++)
	{
		sum = sum + 1 / i;
		if (i == 1)
		{
			printf("1+");
		}
		else if (i == number)
		{
			printf("1/%f", i);
		}
		else
		{
			printf("1/%f", i);
		}
	}
	printf("The sum of this series is: %f \n", sum);
	system("pause");
	return 0;
}