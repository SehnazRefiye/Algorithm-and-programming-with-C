//1'den n'e kadar olan çift sayıların toplamı
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i, number, sum = 0;
	printf("Please enter a number: \n");
	scanf_s("%d", &number);
	for (i = 2; i < number; i += 2)
	{
		sum = sum + i;
	}
	printf("The sum of all even numbers between 1 to %d is: %d \n", number, sum);
	system("pause");
	return 0;
}