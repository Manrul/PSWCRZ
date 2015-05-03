#include<stdio.h>
#include<stdlib.h>

int silnia(int n)
{
	if(n==0) return 1;
	else return(silnia(n-1)*n);



}
main()
{
	int n;
	printf("podaj liczbe\n");
	scanf("%d",&n);
	printf("%d silnia=%d\n",n,silnia(n));

	system("pause");
}
