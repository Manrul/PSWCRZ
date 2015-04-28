#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>

pthread_mutex_t mojmuteks=PTHREAD_MUTEX_INITIALIZER; //potrzebny do synchronizowania, dziala jak semafor

int t_tab[11];
/*-------------------------------*/
int r_fun(void)
{
	int i;
	int suma=0;

	int result;
	pthread_mutex_lock(&mojmuteks);	//blokujemy mutex, rezerwujemy zasoby
	for(i=0; i<10; i++)
	{
		srand( time(NULL)+i );
		result=( rand() %100 ) +1;
		t_tab[i]=result;
		suma=suma+result;
	}
	t_tab[10]=suma;
	pthread_mutex_unlock(&mojmuteks);//oblokowujemy mutex, oddajemy zasoby
	return 0;
}
/*----------------------------*/
int loops;
void *Hello(void *arg)
{	
	loops=0;
	while(1)
	{
		r_fun();
		loops++;
	}
	return NULL;
}
/*----------------------------*/
int main(void)
{
	pthread_t m_thread;
	int suma=0;
	int j;
	long i=0;
	
	if( pthread_create( &m_thread, NULL, Hello, NULL ))
	{
		printf( "\rBłąd przy tworzeniu wątku.\n" );
		abort();
	}
	while(1)
	{	
		i++;
		//sleep(1);
		pthread_mutex_lock(&mojmuteks);
		for( j=0, suma=0; j<10; j++ )
		{	
			suma=suma+t_tab[j];
		}
		pthread_mutex_lock(&mojmuteks);
		if( suma!=t_tab[10] )
		{
			printf( "\rBłąd sumy kontrolnej dla i=%ld \n", i );
		}
		
	}
	printf("\n LOLOLOLO ");
	exit(0);
}
