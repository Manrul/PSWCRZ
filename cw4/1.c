#include <stdio.h>
#include <stdarg.h>


int main(void)
{
	char *argv[3] = {"Find", ".", NULL};

	int pid = fork();

	if( pid == 0)
	{
		execvp( "find", argv );
	}
	/* sleep 2 sec- zakonczenie procesu potomnego*/
	wait( 2 );
	printf("Koniec procesu rodzica \n");
	return 0;
}
