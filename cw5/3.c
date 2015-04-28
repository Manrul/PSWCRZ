#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

/*----------------------------*/
void *fun(void *arg) //nasz podproces(tworzony przez glowny proces)
{
	//int i=10;
	int result;
	while(1) //while(i--)
	{
		putc('.',stderr);
	}
	result=15;
	return ((void *) &result);
}
/*----------------------------*/
int main(int argc, char *argv[])
{
	int i=10;
	pthread_t tid;
	void *fun_result; // wskaznik potrzebyn do pthread_join, wskaznik na adres pamieci

	if( pthread_create(&tid, NULL, fun, NULL))
	{
		printf("Błąd utworzenia wątku"); //jezeli watek nie powstanie
		abort();			//to wyrzuc blad
	}

	//pthread_join(tid, &(fun_result)); // ta funkcja czeka na zakonczenie watku tid, zamiast NULL mozna dac adres wskaznika do funkcji
	sleep(1);
	pthread_cancel(tid);

	while(i--)
	{	
		putc('|',stderr);
	}
	
	printf("\n Wynik wątku %d\n", *(int *)fun_result); //adres musimy rzutowac do integer, a nastepnie operacja wyłuskania	

	return 0;
}
