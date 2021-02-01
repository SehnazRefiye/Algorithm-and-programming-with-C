//geçer kalır not hesaplayan program
#include<stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int grade;
	printf("Please enter the grade: \n");
	scanf_s("%d", &grade);
	if (grade > 49)
		printf("The student has passed. \n");
	else
		printf("The student has failed. \n");
	system("pause");
	return 0;
}