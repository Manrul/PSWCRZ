#include <stdio.h>
#include <math.h>


int main(void)
{
	int pid;
	/*int i;*/

	printf("\n Start programu \n");
	
	pid=fork();

	if(pid>0) /* proces macierzysty*/
	{	
		int i;
		printf(" Nr procesu: %d\n\n", pid);
		for (i=0; i<=360; i+=10)
			printf("\r\n sinus kata: %i wynosi %f", i, sin((2*i*M_PI)/180));
			printf("\n KONIEC PROCESU MACIERZYSTEGO\n");
	}	
	else if(pid==0) /* proces potomny */
		{	
			sleep(1);
			int i;
			for(i=0; i<=20; i++)
				printf("\r\nPierwiastek z %i wynosi: %f", i, sqrt(i));
				printf("\n KONIEC PROCESU POTOMNEGO\n");
	}
	else { /* BŁĄD */
	return -1;
	}
	printf("\n STOP  \n");

	return 0;
}
