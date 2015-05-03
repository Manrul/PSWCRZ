#include<stdio.h>
#include<stdlib.h>


int bezw(int n)
{
int w;
(n>0)?(w=n):(w=-n);
return w;
}
int main()
{
int n;

printf("Podaj liczbe\n");
scanf("%d",&n);
printf("Wartosc bezwzgledna wynosi:%d\n",bezw(n));

system("pause");
}
