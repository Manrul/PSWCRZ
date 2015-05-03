#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int funkcja_sito(int *tablica,int n)
{
int i,j,k;

	for(i=0;i<n;i++)
		tablica[i]=1;
	for(i=2;i<=sqrt(n);i++)
	{
		for(k=2;k<=n;k++)
	{
		if((i*k)<=n)
		{
			tablica[(i*k)]=0;
			
	}
	}
	}
	

}
int wypiszmax(int *tablica,int n)
{
	int i,w;
	for(i=0;i<=n;i++)
	{
		if(tablica[i]==1)
			w=i;
	}
	printf("Najwieksza liczba pierwsza <=%d,to:\n",(n-1));
	printf("%d\n",w);
}


main()
{

	int n,*tablica;

	printf("Podaj rozmiar tablicy\n");
	   scanf("%d",&n);
	   while(n<3)
		{
			printf("Podania liczba jest <3,sproboj ponownie\n");
			printf("Podaj rozmiar tablicy\n");
	        scanf("%d",&n);
		}
	   

	tablica=(int*)malloc((n+1)*sizeof(int));
	if(!tablica)
printf("Pamiec nie zostala zaalokowana!\n");
	else
	{
		
	
		funkcja_sito(tablica,(n+1));
	    wypiszmax(tablica,(n+1));
	
}
	
	system("pause");
}
