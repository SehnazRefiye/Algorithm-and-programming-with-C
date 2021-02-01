//e üssü x + 2*x*x*x+1
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x, i;
	float e = 2.71, part1 = 1, part2, sum;
	printf("Please enter x: \n");
	scanf_s("%d", &x);
	if (x < 0)
	{
		for (i = 0; i > x; i--)
		{
			part1 = part1 / e;
		}
	}
	else
	{
		for (i = 0; i < x; i++)
		{
			part1 = part1 * e;
		}
	}
	part2 = 2 * x * x * x + 1;
	sum = part1 + part2;
	printf("The sum is: %f \n", sum);
	system("pause");
	return 0;
}