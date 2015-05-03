#include<stdio.h>
#include<stdlib.h>


int funkcja(int n,int m)
{
	int i,w=1;
	if(n>0&&m>0)
	{
	for(i=1;i<=m;i++)
		w*=n;
	}
	else if(n>0&&m==0)
		w=1;
	else 
		w=0;
		
	return w;
}
 main()
{
int a,b,u=1;

while(u)
{
printf("Podaj liczbe \n");
scanf("%d",&a);
printf("Podaj liczbe \n");
scanf("%d",&b);

if(a>=0)
{
	if(a>0||b>0)
	{
printf("%d do potegi %d wynosi:%d\n",a,b,funkcja(a,b));
u=0;
	}
	else  
		printf("Sprobuj ponownie\n");
}
else
{

   printf("Sprobuj ponownie\n");
}
}

system("pause");
}
