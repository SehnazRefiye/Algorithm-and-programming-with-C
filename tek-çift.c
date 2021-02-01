//girilen sayının tek mi çift mi olduğunu söyleyen program
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x;
	printf("Please enter a number: \n");
	scanf_s("%d", &x);
	if (x % 2 == 0)
		printf("This number is even number. \n");
	else
		printf("This number is odd number. \n");
	system("pause");
	return 0;
}
