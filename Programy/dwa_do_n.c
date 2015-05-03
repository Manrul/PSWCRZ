#include<stdio.h>
#include<stdlib.h>


float funkcja(float n)
{
	int i;
	float w=1,p=(0.5);
	if(n==0)
	{
		w=1;
	}
	else if(n>0)
	{
	for(i=1;i<=n;i++)
	      w*=2;
	}
	else
	{

    
	 n=-n;
	    for(i=1;i<=n;i++)
	      w*=p;

	}
	return w;


}
 main()
{
float n;

printf("Podaj liczbe\n");
scanf("%f",&n);
printf("Wartosc wynosi:%f\n",funkcja(n));


system("pause");
}
