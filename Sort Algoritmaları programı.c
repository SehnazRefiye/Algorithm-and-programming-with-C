#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h> 
#include <math.h>
#include <time.h>
void bubbleSort1(int dizi[], int elSay)  		//Bubble Sort'u k���kten b�y��e yapan fonksiyonumu tan�ml�yorum.
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

void bubbleSort2(int dizi[], int elSay)		//Bubble Sort'u b�y�kten k����e yapan fonksiyonumu tan�ml�yorum.
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

void selectionSort1 (int dizi[], int elSay)		//Selection Sort'u k���kten b�y��e yapan fonksiyonumu tan�ml�yorum.
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

void selectionSort2 (int dizi[], int elSay)		//Selection Sort'u b�y�kten k����e yapan fonksiyonumu tan�ml�yorum.
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

void insertionSort1(int dizi[], int elSay)		//Insertion Sort'u k���kten b�y��e yapan fonksiyonumu tan�ml�yorum.
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

void insertionSort2(int dizi[], int elSay)		//Insertion Sort'u b�y�kten k����e yapan fonksiyonumu tan�ml�yorum.
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

void shellSort1(int dizi[], int elSay)		//Shell Sort'u k���kten b�y��e yapan fonksiyonumu tan�ml�yorum.
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

void shellSort2(int dizi[], int elSay)		//Shell Sort'u b�y�kten k����e yapan fonksiyonumu tan�ml�yorum.
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

float getdiff(struct timeval endtv, struct timeval starttv)		//	Fonksiyondan �nceki ve sonraki zaman� al�p kar��la�t�rmama 
{																//	yard�mc� olacak fonksiyonu tan�ml�yorum.
   float diff=0;
   diff=(endtv.tv_sec-starttv.tv_sec)*1000000+
   (endtv.tv_usec-starttv.tv_usec);
   diff=diff/1000000;
   return diff;
}



int main(){													// Ana fonksiyonumu yazmaya ba�l�yorum.
	setlocale(LC_ALL, "Turkish");
	int i;
	int secenek;
	printf("----------PROGRAMA HO�GELD�N�Z----------\n");
	printf("1: Bir s�ralama algoritmas� se�erek diziyi s�ralay�n�z. \n2: T�m s�ralama algoritmalar�n� kar��la�t�r�n�z.\n");
	scanf("%d",&secenek);
	
		switch(secenek){
		case 1 : 
		
			srand(time(NULL));
			int dizi[10];
					
			for(i=0;i<10;i++)
				{
					dizi[i]=rand() % 99;					//Rastgele say�lar� s�ras�yla dizinin her bir eleman�na at�yorum.
				}
		    printf("S�ralama algoritmas�n� se�iniz. \n1: Bubble Sort\n2: Selection Sort\n3: Insertion Sort\n4: Shell Sort\n");
			scanf("%d",&secenek);
			
			switch(secenek){
				case 1 :
					
					printf("1: K���kten B�y��e\n2: B�y�kten K����e\n");
					scanf("%d",&secenek);
					
					switch(secenek){
						case 1 :
							printf("S�ralamadan �nceki hali :  ");
							for(i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							bubbleSort1(dizi, 10);
							printf("\nS�ralamadan sonraki hali :  ");
							for (i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							break;
						case 2 :
							printf("S�ralamadan �nceki hali :  ");
							for(i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							bubbleSort2(dizi, 10);
							printf("\nS�ralamadan sonraki hali :  ");
							for (i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							break;
					}
				break;
				case 2:
					printf("1: K���kten B�y��e\n2: B�y�kten K����e\n");
					scanf("%d",&secenek);
					
					switch(secenek){
						case 1 :
							printf("S�ralamadan �nceki hali :  ");
							for(i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							selectionSort1(dizi, 10);
							printf("\nS�ralamadan sonraki hali :  ");
							for (i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							break;
						case 2 :
							printf("S�ralamadan �nceki hali :  ");
							for(i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							selectionSort2(dizi, 10);
							printf("\nS�ralamadan sonraki hali :  ");
							for (i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							break;
					}
				break;
				case 3:
					printf("1: K���kten B�y��e\n2: B�y�kten K����e\n");
					scanf("%d",&secenek);
					
					switch(secenek){
						case 1 :
							printf("S�ralamadan �nceki hali :  ");
							for(i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							insertionSort1(dizi, 10);
							printf("\nS�ralamadan sonraki hali :  ");
							for (i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							break;
						case 2 :
							printf("S�ralamadan �nceki hali :  ");
							for(i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							insertionSort2(dizi, 10);
							printf("\nS�ralamadan sonraki hali :  ");
							for (i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							break;
					}
				break;
				case 4:
					printf("1: K���kten B�y��e\n2: B�y�kten K����e\n");
					scanf("%d",&secenek);
					
					switch(secenek){
						case 1 :
							printf("S�ralamadan �nceki hali :  ");
							for(i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							shellSort1(dizi, 10);
							printf("\nS�ralamadan sonraki hali :  ");
							for (i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							break;
						case 2 :
							printf("S�ralamadan �nceki hali :  ");
							for(i=0;i<10;i++)
							{
								printf("%d , ", dizi[i]);
							}
							shellSort2(dizi, 10);
							printf("\nS�ralamadan sonraki hali :  ");
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
			struct timeval starttv, endtv;				//gettimeofday fonksiyonunu kullanmak i�in tan�mlamalar�m� yap�yorum.
			struct timezone starttz, endtz; 
			
			int dizi2[50000];
					
			for(i=0;i<50000;i++)
				{
					dizi[i]=rand() % 200000;			//	1 ve 200.000 aras�nda rasgele say�lardan olu�an
				}										//  50.000 say� kapasiteli dizimi olu�turuyorum.
		
			gettimeofday(&starttv, &starttz);
			
			bubbleSort1(dizi, 50000);					// Her fonksiyonu kullanmadan �nce ve sonraki zamanlar� kar��la�t�rarak
														// fonksiyonlar�m�n �al��ma h�zlar�n� hesaplat�p ekrana bast�r�yorum.
			gettimeofday(&endtv, &endtz);	
			float fark1=getdiff(endtv, starttv);
			
			printf("Bubble Sort'ta i�leminiz %f saniye s�rm��t�r.", fark1);
			
			gettimeofday(&starttv, &starttz);
			
			selectionSort1(dizi, 50000);
					
			gettimeofday(&endtv, &endtz);	
			float fark2=getdiff(endtv, starttv);
			
			printf("\nSelection Sort'ta i�leminiz %f saniye s�rm��t�r.", fark2);
			
			gettimeofday(&starttv, &starttz);
			
			insertionSort1(dizi, 50000);
					
			gettimeofday(&endtv, &endtz);	
			float fark3=getdiff(endtv, starttv);
			
			printf("\nInsertion Sort'ta i�leminiz %f saniye s�rm��t�r.", fark3);
			
			gettimeofday(&starttv, &starttz);
			
			shellSort1(dizi, 50000);
					
			gettimeofday(&endtv, &endtz);	
			float fark4=getdiff(endtv, starttv);
			
			printf("\nShell Sort'ta i�leminiz %f saniye s�rm��t�r.", fark4);
			
			break;
			
		}
	return 0;											//program� bir karakter alarak sonland�r�yorum.
	getch();
	}
