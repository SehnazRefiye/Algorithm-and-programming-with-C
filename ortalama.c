//ortalama hesaplayan program 
#include<stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int num1, num2, num3, sum = 0;
	float average;
	printf("Please enter number: \n");
	scanf_s("%d", &num1);
	printf("Please enter number: \n");
	scanf_s("%d", &num2);
	printf("Please enter number: \n");
	scanf_s("%d", &num3);
	sum = num1 + num2 + num3;
	average = sum / 3;
	printf("The average of %d, %d and %d is: %f \n", num1, num2, num3, average);
	system("pause");
	return 0;
}