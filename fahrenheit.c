//fahrenheitı celciusa çeviren program
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int fahrenheit;
	float celcius;
	printf("Please enter fahrenheit: \n");
	scanf_s("%d", &fahrenheit);
	celcius = (fahrenheit - 32) * 5 / 9;
	printf("The celcius is: %f \n", celcius);
	system("pause");
	return 0;
}