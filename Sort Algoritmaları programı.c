#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h> 
#include <math.h>
#include <time.h>
void bubbleSort1(int dizi[], int elSay)  		//Bubble Sort'u küçükten büyüðe yapan fonksiyonumu tanýmlýyorum.
{
     int temp;
     int i, j;
 
     for (i=1; i<elSay; i++)
     {
         for (j=0; j<elSay-i; j++)
         {
             if(dizi[j] > dizi[j+1])
             {
                        temp = dizi [j];
                        dizi [j] = dizi [j+1];
                        dizi [j+1] = temp;
             }
         }
     } 
     return 0;	 
}

void bubbleSort2(int dizi[], int elSay)		//Bubble Sort'u büyükten küçüðe yapan fonksiyonumu tanýmlýyorum.
{
     int temp;
     int i, j;
 
     for (i=1; i<elSay; i++)
     {
         for (j=0; j<elSay-i; j++)
         {
             if(dizi[j] < dizi[j+1])
             {
                        temp = dizi [j];
                        dizi [j] = dizi [j+1];
                        dizi [j+1] = temp;
             }
         }
     }  
     return 0;	 
}

void selectionSort1 (int dizi[], int elSay)		//Selection Sort'u küçükten büyüðe yapan fonksiyonumu tanýmlýyorum.
{
     int i, j, kucuk, temp;
     for (i=0; i<elSay-1; i++)
     {
         kucuk = i;
         for (j=i+1; j<elSay; j++)
         {
             if (dizi[j] < dizi [kucuk])
             kucuk = j;
         }
         temp = dizi[i];
         dizi[i] = dizi[kucuk];
         dizi[kucuk] = temp;
     }
     return 0;
}

void selectionSort2 (int dizi[], int elSay)		//Selection Sort'u büyükten küçüðe yapan fonksiyonumu tanýmlýyorum.
{
     int i, j, buyuk, temp;
     for (i=0; i<elSay-1; i++)
     {
         buyuk = i;
         for (j=i+1; j<elSay; j++)
         {
             if (dizi[j] > dizi [buyuk])
             buyuk = j;
         }
         temp = dizi[i];
         dizi[i] = dizi[buyuk];
         dizi[buyuk] = temp;
     }
     return 0;
}

void insertionSort1(int dizi[], int elSay)		//Insertion Sort'u küçükten büyüðe yapan fonksiyonumu tanýmlýyorum.
{
   int i, deger, j;
   for (i = 1; i < elSay; i++)
   {
       deger = dizi[i];
       j = i-1;
 
       
       while (j >= 0 && dizi[j] > deger)
       {
           dizi[j+1] = dizi[j];
           j = j-1;
       }
       dizi[j+1] = deger;
   }
   return 0;
}

void insertionSort2(int dizi[], int elSay)		//Insertion Sort'u büyükten küçüðe yapan fonksiyonumu tanýmlýyorum.
{
   int i, deger, j;
   for (i = 1; i < elSay; i++)
   {
       deger = dizi[i];
       j = i-1;
 
       
       while (j >= 0 && dizi[j] < deger)
       {
           dizi[j+1] = dizi[j];
           j = j-1;
       }
       dizi[j+1] = deger;
   }
   return 0;
}

void shellSort1(int dizi[], int elSay)		//Shell Sort'u küçükten büyüðe yapan fonksiyonumu tanýmlýyorum.
{
    int i, j, k, temp;
    for (i = elSay / 2; i > 0; i = i / 2)
    {
        for (j = i; j < elSay; j++)
        {
            for(k = j - i; k >= 0; k = k - i)
            {
                if (dizi[k+i] >= dizi[k])
                    break;
                else
                {
                    temp = dizi[k];
                    dizi[k] = dizi[k+i];
                    dizi[k+i] = temp;
                }
            }
        }
    }
}

void shellSort2(int dizi[], int elSay)		//Shell Sort'u büyükten küçüðe yapan fonksiyonumu tanýmlýyorum.
{
    int i, j, k, temp;
    for (i = elSay / 2; i > 0; i = i / 2)
    {
        for (j = i; j < elSay; j++)
        {
            for(k = j - i; k >= 0; k = k - i)
            {
                if (dizi[k+i] <= dizi[k])
                    break;
                else
                {
                    temp = dizi[k];
                    dizi[k] = dizi[k+i];
                    dizi[k+i] = temp;
                }
            }
        }
    }
}

float getdiff(struct timeval endtv, struct timeval starttv)		//	Fonksiyondan önceki ve sonraki zamaný alýp karþýlaþtýrmama 
{																//	yardýmcý olacak fonksiyonu tanýmlýyorum.
   float diff=0;
   diff=(endtv.tv_sec-starttv.tv_sec)*1000000+
   (endtv.tv_usec-starttv.tv_usec);
   diff=diff/1000000;
   return diff;
}



int main(){													// Ana fonksiyonumu yazmaya baþlýyorum.
	setlocale(LC_ALL, "Turkish");
	int i;
	int secenek;
	printf("----------PROGRAMA HOÞGELDÝNÝZ----------\n");
	printf("1: Bir sýralama algoritmasý seçerek diziyi sýralayýnýz. \n2: Tüm sýralama algoritmalarýný karþýlaþtýrýnýz.\n");
	scanf("%d",&secenek);
	
		switch(secenek){
		case 1 : 
		
			srand(time(NULL));
			int dizi[10];
					
			for(i=0;i<10;i++)
				{
					dizi[i]=rand() % 99;					//Rastgele sayýlarý sýrasýyla dizinin her bir elemanýna atýyorum.
				}
		    printf("Sýralama algoritmasýný seçiniz. \n1: Bubble Sort\n2: Selection Sort\n3: Insertion Sort\n4: Shell Sort\n");
			scanf("%d",&secenek);
			
			switch(secenek){
				case 1 :
					
					printf("1: Küçükten Büyüðe\n2: Büyükten Küçüðe\n");
					scanf("%d",&secenek);
					
					switch(secenek){
						case 1 :
							printf("Sýralamadan önceki hali :  ");
							for(i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							bubbleSort1(dizi, 10);
							printf("\nSýralamadan sonraki hali :  ");
							for (i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							break;
						case 2 :
							printf("Sýralamadan önceki hali :  ");
							for(i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							bubbleSort2(dizi, 10);
							printf("\nSýralamadan sonraki hali :  ");
							for (i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							break;
					}
				break;
				case 2:
					printf("1: Küçükten Büyüðe\n2: Büyükten Küçüðe\n");
					scanf("%d",&secenek);
					
					switch(secenek){
						case 1 :
							printf("Sýralamadan önceki hali :  ");
							for(i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							selectionSort1(dizi, 10);
							printf("\nSýralamadan sonraki hali :  ");
							for (i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							break;
						case 2 :
							printf("Sýralamadan önceki hali :  ");
							for(i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							selectionSort2(dizi, 10);
							printf("\nSýralamadan sonraki hali :  ");
							for (i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							break;
					}
				break;
				case 3:
					printf("1: Küçükten Büyüðe\n2: Büyükten Küçüðe\n");
					scanf("%d",&secenek);
					
					switch(secenek){
						case 1 :
							printf("Sýralamadan önceki hali :  ");
							for(i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							insertionSort1(dizi, 10);
							printf("\nSýralamadan sonraki hali :  ");
							for (i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							break;
						case 2 :
							printf("Sýralamadan önceki hali :  ");
							for(i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							insertionSort2(dizi, 10);
							printf("\nSýralamadan sonraki hali :  ");
							for (i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							break;
					}
				break;
				case 4:
					printf("1: Küçükten Büyüðe\n2: Büyükten Küçüðe\n");
					scanf("%d",&secenek);
					
					switch(secenek){
						case 1 :
							printf("Sýralamadan önceki hali :  ");
							for(i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							shellSort1(dizi, 10);
							printf("\nSýralamadan sonraki hali :  ");
							for (i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							break;
						case 2 :
							printf("Sýralamadan önceki hali :  ");
							for(i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							shellSort2(dizi, 10);
							printf("\nSýralamadan sonraki hali :  ");
							for (i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							break;
					}
					break;	
			}
			
			break;
		case 2:
			
			srand(time(NULL));
			struct timeval starttv, endtv;				//gettimeofday fonksiyonunu kullanmak için tanýmlamalarýmý yapýyorum.
			struct timezone starttz, endtz; 
			
			int dizi2[50000];
					
			for(i=0;i<50000;i++)
				{
					dizi[i]=rand() % 200000;			//	1 ve 200.000 arasýnda rasgele sayýlardan oluþan
				}										//  50.000 sayý kapasiteli dizimi oluþturuyorum.
		
			gettimeofday(&starttv, &starttz);
			
			bubbleSort1(dizi, 50000);					// Her fonksiyonu kullanmadan önce ve sonraki zamanlarý karþýlaþtýrarak
														// fonksiyonlarýmýn çalýþma hýzlarýný hesaplatýp ekrana bastýrýyorum.
			gettimeofday(&endtv, &endtz);	
			float fark1=getdiff(endtv, starttv);
			
			printf("Bubble Sort'ta iþleminiz %f saniye sürmüþtür.", fark1);
			
			gettimeofday(&starttv, &starttz);
			
			selectionSort1(dizi, 50000);
					
			gettimeofday(&endtv, &endtz);	
			float fark2=getdiff(endtv, starttv);
			
			printf("\nSelection Sort'ta iþleminiz %f saniye sürmüþtür.", fark2);
			
			gettimeofday(&starttv, &starttz);
			
			insertionSort1(dizi, 50000);
					
			gettimeofday(&endtv, &endtz);	
			float fark3=getdiff(endtv, starttv);
			
			printf("\nInsertion Sort'ta iþleminiz %f saniye sürmüþtür.", fark3);
			
			gettimeofday(&starttv, &starttz);
			
			shellSort1(dizi, 50000);
					
			gettimeofday(&endtv, &endtz);	
			float fark4=getdiff(endtv, starttv);
			
			printf("\nShell Sort'ta iþleminiz %f saniye sürmüþtür.", fark4);
			
			break;
			
		}
	return 0;											//programý bir karakter alarak sonlandýrýyorum.
	getch();
	}
