#include<stdio.h>
#include<stdlib.h>
int pierwiastek(int n)
{
int i,p,x=1;
    i=0;
	p=0;
	while(x)
	{
		i++;
		p=i*i;
		if(p>n)
		{
           i--;
		   x=0;
		}
	}
	return i;
}

main()
{
	int a,u=1;
	
	while(u)
	{
	printf("Podaj liczbe \n");
	scanf("%d",&a);

	if(a>=0)
	{
	printf("Pierwiastkiem calkowitym %d,jest:%d\n",a,pierwiastek(a));
	u=0;
	}
	else
	{
		printf("Nie mozna pierwiastkowac liczby ujemnej,\n");
	    printf("sprobuj ponownie\n");
	}
	}

	system("pause");
}
