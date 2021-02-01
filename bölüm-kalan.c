//bölme iþleminde bölüm kalan hesaplayan program
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int devident, devisor, quotient;
	printf("Please enter devident: \n");
	scanf_s("%d", &devident);
	printf("Please enter devisor: \n");
	scanf_s("%d", &devisor);
	for (quotient = 0; devisor <= devident; quotient++)
	{
		devident = devident - devisor;
	}
	printf("The quotient is: %d \nThe remainder is: %d \n", quotient, devident);
	system("pause");
	return 0;
}