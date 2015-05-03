#include<stdio.h>
#include<stdlib.h>


int funkcja(int n)
{
	int static suma=0;
	suma+=n;
	 printf("Suma wynosi %d\n",suma);
	return n;

}


main()/*prigram zamyka sie po wcisnieciu 0*/
{
	int n=1,suma=0;
	while(n)
	{
		 printf("Podaj liczbe\n");
		 scanf("%d",&n);
		 funkcja(n);
		


	}


	system("pause");
}
