#include<stdio.h>
#include<stdlib.h>

unsigned int fibonaczi(int n)
{
	int w;
	if(n==0)
		w=0;
	else if(n==1)
		w=1;
	else
		w=fibonaczi(n-1)+fibonaczi(n-2);
	return w;


}
unsigned int fib(unsigned int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1)+fib(n-2);
}
main()
{
	unsigned int n;
	printf("Podaj liczbe n=");
	scanf("&d",&n);
	printf("%d wyraz ciagu=%d",fib(n));
	system("pause");
}
