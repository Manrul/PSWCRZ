#include<stdio.h>
#include<stdlib.h>
#include <time.h>

float pseudolosowe(int n,float l)
{

	int i;
	float p;

	for(i=1;i<=n;i++)
	{
		p=1-l*l;
		l=p;
		printf("%.1f\n",p);
	}


}

main()
{
	int n,u=1;
   
	int HI=1,LO=0;
	srand(time(NULL));

	 while(u)
	 {
	printf("Ile liczb wypisac?\n");
	scanf("%d",&n);
	if(n>0)
	{
	
	float liczba= LO+(float)rand()/((float)RAND_MAX/(HI-LO));

	pseudolosowe(n,liczba);
	u=0;
	 }
	else
		printf("sprobuj ponowanie\n");
	 }
	system("pause");
}
