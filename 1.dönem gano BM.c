#include<stdio.h>
#include<locale.h>
//#pragma warning(disable:4996)

int main( void )
{
	setlocale(LC_ALL, "Turkish");
	int vize1, vize2, vize3, vize4, vize5, vize6, vize7, final1, final2, final3, final4, final5, final6;
	float average1, average2, average3, average4, average5, average6, gano, x;
	
	//ders1 için
	while(1)
	{
		printf("Fizik dersinin vizesini giriniz: \n");
		scanf_s("%d", &vize1);
		if (vize1 < 0 || vize1>100)
		{
			printf("0 ve 100 arasýnda bir deðer girmelisiniz. \n Dersin vizesini tekrar giriniz: \n");
			scanf_s("%d", &vize1);
			continue;
		}
		else
		break;
	}
	
	while(1)
	{
		printf("Fizik dersinin finalini giriniz: \n");
		scanf_s("%d", &final1);

		if (final1 < 0 || final1>100)
		{
			printf("0 ve 100 arasýnda bir deðer girmelisiniz. \n Dersin finalini tekrar giriniz: \n");
			scanf_s("%d", &final1);
			continue;
		}
		else
		break;
	}
	
	average1 = (vize1*40/100) + (final1*60/100);
	printf("Dersin ortalamasý: %f \n", average1);
	
	//ders2 için
	while(1)
	{
		printf("Matematik dersinin vizesini giriniz: \n");
		scanf_s("%d", &vize2);

		if (vize2 < 0 || vize2>100)
		{
			printf("0 ve 100 arasýnda bir deðer girmelisiniz. \n Dersin vizesini tekrar giriniz: \n");
			scanf_s("%d", &vize2);
			continue;
		}
		else 
		break;
	}

	while(1)
	{
		printf("Matematik dersinin finalini giriniz: \n");
		scanf_s("%d", &final2);
		if (final2 < 0 || final2>100)
		{
			printf("0 ve 100 arasýnda bir deðer girmelisiniz. \n Dersin finalini tekrar giriniz: \n");
			scanf_s("%d", &final2);
			continue;
		}
		else
		break;
	}

	average2 = (vize2*40/100) + (final2*60/100);
	printf("dersin ortalamasý: %f \n", average2);

	//ders3 için
	while(1)
	{
		printf("Çizge dersinin vizesini giriniz: \n");
		scanf_s("%d", &vize3);
		if (vize3 < 0 || vize3>100)
		{
			printf("0 ve 100 arasýnda bir deðer girmelisiniz. \n Dersin vizesini tekrar giriniz: \n");
			scanf_s("%d", &vize3);
			continue;
		}
		else
		break;
	}

	while(1)
	{
		printf("Çizge dersinin finalini giriniz: \n");
		scanf_s("%d", &final3);
		if (final3 < 0 || final3>100)
		{
			printf("0 ve 100 arasýnda bir deðer girmelisiniz. \n Dersin finalini tekrar giriniz: \n");
			scanf_s("%d", &final3);
			continue;
		}
		else 
		break;
	}


	average3 = (vize3*40/100) + (final3*60/100);
	printf("dersin ortalamasý: %f \n", average3);

	//ders4 için
	while(1)
	{
		printf("Bilgisayar dersinin vizesini giriniz: \n");
		scanf_s("%d", &vize4);
		if (vize4 < 0 || vize4>100)
		{
			printf("0 ve 100 arasýnda bir deðer girmelisiniz. \n Dersin vizesini tekrar giriniz: \n");
			scanf_s("%d", &vize4);
			continue;
		}
		else
		break;
	}

	while(1)
	{
		printf("Bilgisayar dersinin finalini giriniz: \n");
		scanf_s("%d", &final4);
		if (final4 < 0 || final4>100)
		{
			printf("0 ve 100 arasýnda bir deðer girmelisiniz. \n Dersin finalini tekrar giriniz: \n");
			scanf_s("%d", &final4);
			continue;
		}
		else 
		break;
	}

	average4 = (vize4*40/100) + (final4*60/100);
	printf("dersin ortalamasý: %f \n", average4);

	//ders5 için
	while(1)
	{	
		printf("Ýngilizce dersinin vizesini giriniz: \n");
		scanf_s("%d", &vize5);
		if (vize5 < 0 || vize5>100)
		{
			printf("0 ve 100 arasýnda bir deðer girmelisiniz. \n Dersin vizesini tekrar giriniz: \n");
			scanf_s("%d", &vize5);
			continue;
		}
		else
		break;
	}

	while(1)
	{
		printf("Ýngilizce dersinin finalini giriniz: \n");
		scanf_s("%d", &final5);
		if (final5 < 0 || final5>100)
		{
			printf("0 ve 100 arasýnda bir deðer girmelisiniz. \n Dersin finalini tekrar giriniz: \n");
			scanf_s("%d", &final5);
			continue;
		}
		else
		break;
	}

	
	average5 = (vize5*40/100) + (final5*60/100);
	printf("dersin ortalamasý: %f \n", average5);

	//ders6 için
	while(1)
	{
		printf("Ýþ saðlýðý dersinin vizesini giriniz: \n");
		scanf_s("%d", &vize6);
		if (vize6 < 0 || vize6>100)
		{
			printf("0 ve 100 arasýnda bir deðer girmelisiniz. \n Dersin vizesini tekrar giriniz: \n");
			scanf_s("%d", &vize6);
			continue;
		}
		else
		break;
	}

	while(1)
	{
		printf("Ýþ saðliðý dersinin finalini giriniz: \n");
		scanf_s("%d", &final6);
		if (final6 < 0 || final6>100)
		{
			printf("0 ve 100 arasýnda bir deðer girmelisiniz. \n Dersin finalini tekrar giriniz: \n");
			scanf_s("%d", &final6);
			continue;
		}
		else
		break;
	}

	average6 = (vize6*40/100) + (final6*60/100);
	printf("dersin ortalamasý: %f \n", average6);

	x = ((average1)*5 + (average2)*6 + (average3)*3 + (average4)*4 + (average5)*4 + (average6)*2)/ 24;
	gano = x * 4 / 100;

	printf("ganonuz: %f ", gano);

	system("pause");
	return 0;
}
