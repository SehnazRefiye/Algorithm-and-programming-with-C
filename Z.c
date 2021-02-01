#include<stdio.h> 
#pragma warning("disable:4996")
int main()
{
	unsigned int counter;
	int x, y, result;
	float Z;
	result = 1;
	counter = 1;

	printf("%s", "Please enter the value of x: \n");
	scanf_s("%d", &x);
	printf("%s", "Please enter the value of y: \n");
	scanf_s("%d", &y);

	if (y <= 0)
	{
		while (counter >= y)
		{
			result = result * 1 / x;
			counter--;
		}
	}
	else
	{
		while (counter <= y)
		{
			result = result * x;
			counter++;
		}
	}

	Z = result + 2 * y * y * y;
	printf("The result is: %f \n", Z);

	system("pause");
	return 0;
}