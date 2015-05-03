#include<stdio.h>
#include<stdlib.h>




main()
{
	int a,b,w,i,c;

	printf("Podaj liczbe n\n");
	scanf("%d",&a);
	printf("Podaj liczbe m\n");
	scanf("%d",&b);
	
	
	(a<b)?(c=a):(c=b);

	for(i=1;i<=c;i++)
	{
		if(a%i==0&&b%i==0)
			w=i;
	}
	printf("Najwiekszy wspolny dzielnik to %d\n",w);

	system("pause");
}
