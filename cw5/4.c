#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

int Licznik=0;

/*----------------------------*/
void *Hello(void *arg) //nasz podproces(tworzony przez glowny proces)
{
	int i,j;
	for( i=0; i<20; i++)
	{
		j=Licznik;
		j=j+1;
		putc('.',stderr);
		//sleep(1);
		Licznik=j;
	}
	return NULL;
}
/*----------------------------*/
int main(void)
{
	pthread_t m_thread;
	int i;
	
	if (pthread_create( &m_thread, NULL, Hello, NULL ))
	{
	printf("\n Bład przy tworzeniu wątka.\n");
	abort();
	}
	sleep(1);
	for( i=0; i<20; i++)
	{
		Licznik=Licznik+1;
		putc('o',stderr);
		
	}

	if( pthread_join( m_thread, NULL) )
	{
		printf("Błąd przy kończeniu wątka.\n");
		abort();
	}

	printf("\nWartość mojej zmiennej globalnej to %d\n", Licznik);
	exit(0);
}
