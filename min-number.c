//girilen sayılardan en küçük olanı bulduran program
#include<stdio.h>
#include<conio.h>
int main()
{
	int value, number, counter, min;
	printf("Please enter a value: \n");
	scanf_s("%d", &value);
	printf("Please enter a number: \n");
	scanf_s("%d", &number);
	min = number;
	for (counter = 1; counter < value; counter++)
	{
		printf("Please enter a number: \n");
		scanf_s("%d", &number);
		if (min > number)
		{
			min = number;
		}
	}
	printf("The min number is: %d \n", min);
	system("pause");
	return 0;
}