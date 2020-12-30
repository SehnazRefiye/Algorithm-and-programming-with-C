// alan hesaplayan program 
#include<stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int length, width, area;
	printf("Please enter lenght: \n");
	scanf_s("%d", &length);
	printf("Please enter width: \n");
	scanf_s("%d", &width);
	area = length * width;
	printf("The area is: %d \n", area);
	system("pause");
	return 0;
}