#include<stdio.h>
#include<stdlib.h>

int silnia(int n)
{
int i,iloczyn=1;
for(i=1;i<=n;i++)
iloczyn*=i;
return iloczyn;
}
int main()
{
int n,w=1;
while(w)
{
printf("Podaj liczbe\n");
scanf("%d",&n);
if(n>=0)
{
printf("Wartosc wynosi:%d\n",silnia(n));
w=0;
}
else
printf("Sprobuj ponownie\n");
}
system("pause");
}
