//doðru denkleminde kök bulduran program
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b, c;
	float d, r1, r2;
	printf("Please enter three integer number: \n");
	scanf_s("%d %d %d", &a, &b, &c);
	d = sqrt(b * b - 4 * a * c);
	if (d > 0)
	{
		r1 = (-b + d) / 2 * a;
		r2 = (-b - d) / 2 * a;
		printf("The first root is: %f \nThe second root is: %f \n", r1, r2);
	}
	else if (d = 0)
	{
		r1 = (-b + d) / 2 * a;
		printf("The root is: %f \n", r1);
	}
	else
		printf("There is no root. \n");
	system("pause");
	return 0;
}