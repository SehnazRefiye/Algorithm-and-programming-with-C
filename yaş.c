#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	float age;
	printf("Please enter an age: \n");
	scanf_s("%f", &age);
	if (age > 0 && age <= 1)
	{
		printf("He or she is an infant. \n");
	}
	else if (age > 1 && age < 13)
	{
		printf("He or she is a child. \n");
	}
	else if (age >= 13 && age < 20)
	{
		printf("He or she is a teenager. \n");
	}
	else
	{
		printf("He or she is an adult. \n");
	}
	system("pause");
	return 0;
}