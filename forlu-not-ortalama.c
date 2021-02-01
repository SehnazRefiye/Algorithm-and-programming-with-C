//girilen beþ notun ortalamasýný alan program
#include<stdio.h>
#pragma warning (disable: 4996)
int main()
{
	int i, grade, total = 0;
	float average;
	for (i = 1; i <= 5; i++)
	{
		printf("Please enter a grade: \n");
		scanf_s("%d", &grade);
		total = total + grade;
	}
	average = total / 5;
	printf("the averege is: %f \n", average);
	system("pause");
	return 0;
}