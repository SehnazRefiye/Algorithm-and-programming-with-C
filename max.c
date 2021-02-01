//girilen üç sayýnýn max olanýný hesaplayan program
#include<stdio.h>
#pragma warning (disable: 4996)
int main()
{
	int x1, x2, x3, max;
	printf("Please enter three integer numbers: \n");
	scanf_s("%d %d %d", &x1, &x2, &x3);
	if (x1 > x2 && x1 > x3)
		max = x1;
	else if (x2 > x1 && x2 > x3)
		max = x2;
	else
		max = x3;
	printf("The max number between %d, %d and %d is: %d \n", x1, x2, x3, max);
	system("pause");
	return 0;
}