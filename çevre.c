//çemberde çevreyi ve alaný hasaplayan program
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int radius;
	float pi = 3.14, circumference, area;
	printf("Please enter radius: \n");
	scanf_s("%d", &radius);
	circumference = pi * radius * 2;
	area = pi * radius * radius;
	printf("The circumference is: %f \nThe area is: %f \n", circumference, area);
	system("pause");
	return 0;
}