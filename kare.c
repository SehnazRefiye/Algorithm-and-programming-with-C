//bir sayýnýn karesini ve küpünü hesaplayan program
#include<stdio.h>
#pragma warning(disable:4996);
int main()
{
	int x, square, cube;
	printf("Please enter a integer number: \n");
	scanf_s("%d", &x);
	square = x * x;
	cube = square * x;
	printf("The square and cube of %d are: %d and %d \n", x, square, cube);
	system("pause");
	return 0;
}