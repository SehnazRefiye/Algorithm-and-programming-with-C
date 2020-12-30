// iki sayýyý toplayan program
#include<stdio.h> //kütüphane açmak için kullanýyoruz
#pragma waring(disable:4996) //C de hata kodu
int main() 
{
	int num1, num2, sum = 0;//bize gerekli olacak tamsayý deðerlerinin isimlerini atýyoruz
	printf("Please enter first number: \n");
	scanf_s("%d", &num1);
	printf("Please enter second number: \n");
	scanf_s("%d", &num2);
	sum = num1 + num2;
	printf("The sum of %d and %d is: %d \n", num1, num2, sum);
	system("pause");//kod sonlandýðýnda sistemi durduruyor 
	return 0;
}
