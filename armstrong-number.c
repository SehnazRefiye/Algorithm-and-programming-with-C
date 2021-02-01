//find and prints all the armstrong numbers that exist between A and B
#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
int main()
{
	int A, B, i, digit, sum, temp, tempnumber, tempnumber2;
	printf("Please enter the A: \n");
	scanf_s("%d", &A);
	printf("Please enter the B: \n");
	scanf_s("%d", &B);
	for (i = A; i <= B; i++)
	{
		digit = 0;
		sum = 0;
		tempnumber = i;
		while (tempnumber != 0)
		{
			tempnumber = tempnumber / 10;
			digit++;
		}
		tempnumber2 = i;
		while (tempnumber2 != 0)
		{
			temp = tempnumber2 % 10;
			sum = sum + pow(temp, digit);
			tempnumber2 = tempnumber2 / 10;
		}
		if (sum == i)
		{
			printf("Armstong number %d: %d \n", temp, i);
		}
	}
	system("pause");
	return 0;
}