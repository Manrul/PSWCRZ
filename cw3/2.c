#include <stdio.h>

int main(void)
{
	int pid,i,wejt;


	printf("\n Start programu \n");
	pid=fork();
	wejt=wait();
	if(pid>0){
		wait();
		printf(" \n Proces rodzic o PID=%d -koniec \n", pid);
		printf(" \n Wait zwrociło: %d\n", wejt);
		 }
	else if(pid==0){
			for(i=0;i<20;i++)
				{
				printf("\n Iteracja %d", i);
				sleep(1);
				}
			printf("\n proces potomny - koniec \n");
			} 
			else{
	}
	return 0;
}
