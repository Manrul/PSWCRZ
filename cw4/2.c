#include <stdio.h>
#include <pthread.h>

void *fun(void *arg)
{
	while(1)
	{
		putc('W', stderr);
		sleep(1);
	}
	return (NULL);
}

int main(int argc, char *argv[])
{
	pthread_t tid;
	
	pthread_create(&tid, NULL, fun, NULL);
	while(1)
	{
		putc('M', stderr);
		sleep(1);
	}
	return 0;
}
