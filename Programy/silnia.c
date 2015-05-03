#include<stdio.h>
#include<stdlib.h>

int silnia(int n)
{
	int i,iloczyn;
	iloczyn=1;
	if(n>0)
	{
	for(i=1;i<=n;i++)
	 iloczyn*=i;
     }
	else
		iloczyn=1;/*0!=1*/

	return iloczyn;

}

int suma(int x)
{
	int i,suma=0;
	for(i=0;i<=x;i++)
	{
		suma+=silnia(i);
	}
	return suma;
}





main()
{
	int x,u=1;

	while(u)
	{
		printf("Podaj liczbe\n");
		scanf("%d",&x);

		if(x>=0)
		{
			printf("Wynik=%d\n",suma(x));
			u=0;
		}
		else
		{
          printf("Podana liczba nie moze byc ujemna\n");
		  printf("sprobuj ponownie\n");
         
		}

	}

	system("pause");
}
