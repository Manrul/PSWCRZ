#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>
int potega(int stopien)
{
	int i,w=1;
	for(i=1;i<=stopien;i++)
		w*=10;
	return w;
}
void insertion_sort(int *tablica,int n)
{

	int tmp,i,j;
	
	
	for(i=1;i<n;i++)
	{
		tmp=tablica[i];
		for(j=i-1;j>=0;j--)
			{
				if(tablica[j]>tmp)
			{
				tablica[j+1]=tablica[j];
				
		}
				else
                  break;
				
		}
		tablica[j+1]=tmp;
	}
	
	
}
void selection_sort(int *tablica,int n)
{
	int i,j,min,temp;
	for (i=0;i<n-1;i++)
{
min=i;
for (j=i+1;j<n;j++)
if (tablica[j]<tablica[min]) min=j;
temp=tablica[min];
tablica[min]=tablica[i];
tablica[i]=temp;
}
}
void bubble_exchange_sort_standard(int *tablica,int n)
{
	int tmp,licznik1,licznik2;
	licznik1=0;
	do
	{
		licznik1++;
		licznik2=(n-1);
		do
		{
			licznik2--;
			 if(tablica[licznik2+1]<tablica[licznik2])
			
			{
				tmp=tablica[licznik2];
		tablica[licznik2]=tablica[licznik2+1];
	            tablica[licznik2+1]=tmp;
				
		}

}

		while(licznik2>=0);
}
	while(licznik1!=n);
}
void bubble_exchange_sort_ulepszona(int *tablica,int n)
{
	int tmp,licznik1,flaga=0;
	licznik1=0;
	do
	{
		flaga=0;
		licznik1=(n-1);
		do
		{
			licznik1--;
			 if(tablica[licznik1+1]<tablica[licznik1])
			
			{
				tmp=tablica[licznik1];
		tablica[licznik1]=tablica[licznik1+1];
	            tablica[licznik1+1]=tmp;
				flaga=1;
				
		}

}

		while(licznik1>=0);
}
	while(flaga);
}
void shellsort(int *tablica,int n)
{
	 int h,i,j,x;
	 for(h = 1; h < n; h = 3 * h + 1);
  h /= 9;
  if(!h) h++; 

  while(h)
  {
    for(j = n - h - 1; j >= 0; j--)
    {
      x = tablica[j];
      i = j + h;
      while((i < n) && (x > tablica[i]))
      {
        tablica[i - h] = tablica[i];
        i += h;
      }
      tablica[i - h] = x;
    }
    h /= 3;
  }
}
int radix_sort(int *tablica,int n)
{
	int i,tmp,max,l;
	max=tablica[0];
	for(i=1;i<n;i++)/*wyszukiwanie najwiekszej wartosci tablicy,w celu znalezienia liczby cyfr*/
	{
		if(max<tablica[i])
			max=tablica[i];
	}
	if(max<10)
		l=1;
	if(max>9&&max<100)
		l=2;
    if(max>99&&max<1000)
		l=3;
	for(i=1;i<=l;i++)
	{
	tmp=potega(i);
	bubble_exchange_sort_ulepszona_pozycyjne(tablica,n,tmp);
    }
}
/*funkcja pomocnicza do sortowania pozycyjnego*/
int bubble_exchange_sort_ulepszona_pozycyjne(int *tablica,int n,int stopien)
{
	int tmp,licznik1,flaga=0;
	licznik1=0;
	do
	{
		flaga=0;
		licznik1=(n-1);
		do
		{
			licznik1--;
			/*soruje wartosci biorac pod uwege jednosci a nastepnie liczby dziesiatek*/
			if(((tablica[licznik1+1]%stopien)-(tablica[licznik1+1]%(stopien/10)))<((tablica[licznik1]%stopien)-(tablica[licznik1]%(stopien/10))))
			
			{
				tmp=tablica[licznik1];
		tablica[licznik1]=tablica[licznik1+1];
	            tablica[licznik1+1]=tmp;
				flaga=1;
				
		}

}

		while(licznik1>=0);
}
	while(flaga);
}
void bucket_sort(int *tablica,int n)
{
	printf("brak\n");
	printf("wybierz inna metode sortowania\n");
}




main()
{

    
    int *tablica,n,i,menu=1;
    srand( time( 0 ) );
	printf("Program wczytuje rozmiar tablicy,\n uzupelnia ja losowymi liczbami(od 1 do 20)\n");
	printf("nastepnie je sortuje wybranym sposobem\n\n");
	printf("Podaj rozmiar tablicy=");
	scanf("%d",&n);
	tablica=(int*)malloc(n*sizeof(int));
    for( i=0; i <n; i++ )
        tablica[ i ] = rand() % 20 + 1;

	     printf("\nTablica wejsciowa\n");
	for( i=0; i <n; i++ )
         printf("%d ",tablica[ i ]);
	     printf("\n\n");
			
	while(menu)
	{
		
		printf("Wybierz metode sortowania\n");
		printf("1-Sortowanie przez wstawianie\n");
		printf("2-Sortowanie przez wybor\n");
		printf("3-Sortowanie babelkowe - wersja standardowa\n");
		printf("4-Sortowanie babelkowe - wersja ulepszona\n");
		printf("5-Sortowanie shella\n");
		printf("6-Sortowanie pozycyjne\n");
		printf("7-Sortowanie kubelkowe-brak\n");
		printf("0-zamyka program\n");
		
		
	   scanf("%d",&menu);
		switch(menu)
		{
		case 1:
			{
				insertion_sort(tablica,n);
				break;
			}
		case 2:
			{

				selection_sort(tablica,n);
				break;
			}
		case 3:
			{
				bubble_exchange_sort_standard(tablica,n);
				break;
			}
		case 4:
			{
				bubble_exchange_sort_ulepszona(tablica,n);
				break;
			}
		case 5:
			{
				shellsort(tablica,n);
				break;
			}
		case 6:
			{
				radix_sort(tablica,n);
				break;
			}
		case 7:
			{
				bucket_sort(tablica,n);
				break;
			}

		default:
			printf("Niepoprawny klawisz\n");

		}
	
	if(menu!=0)
	{
	for( i=0; i <n; i++ )
         printf("%d ",tablica[ i ]);
	     printf("\n");
	}
	}
   system("pause");
}
