#include <stdio.h>

int main(void)
{
	printf("\n Start programu \n");
	
	fork();
	printf("\n tekst 1 \n");
	fork();
	printf("\n tekst 2 \n");
	fork();
	printf("\n tekst 3 \n");

	return 0;
}
