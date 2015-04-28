#include <stdio.h>

int main(int argc, char **argv)
{

	int i,pid;
	int dj1,dj2,dj3,tmp1,tmp2; /*przyrost pierwszej wartosc*/
	for(i=0; i<argc; i++)
	{
		printf( "\n arg%d: %s", i, *(argv+i) );
	}
	
	dj1=atoi(*(argv+1));
	dj2=atoi(*(argv+2));
	dj3=atoi(*(argv+3));
	printf("\n liczba dj=%d, dj2=%d, dj3=%d", dj1, dj2, dj3);
	
	pid=fork();
	if(pid>0)
	{	
		int k;
		for(k=0;k<=10;k++)
		{
			dj2=dj1+dj2;
			printf("\n PM liczba: %d", dj2);
			
		}
	} else if(pid==0)
		{	
			int j;
			for(j=0;j<=10;j++)
			{
				dj3=dj1+dj3;
				printf(" \n PP liczba: %d", dj3);
				
			}
		} else {
			return -1;
			}
	
	printf("\n");

	return 0;
}
