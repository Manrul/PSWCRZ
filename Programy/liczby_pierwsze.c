int czy_pierwsza(long n) //zwraca 1, gdy liczba jest liczbą pierwszą
{
	long i;
	for(i=2;i<n/2;i++)
		if(n%i==0)
			return 0;
	return 1;
}


void *liczby_pierwsze(void *arg)
{
	long n; // kolejne liczby
	
	printf("generacja liczb od %ld do %ld\n", START_NR, LONG_MAX);
	for(n=START_NR; n<LONG_MAX; n++)
	{
	if( czy_pierwsza(n) )
		printf(" %ld \n", n);
	}
	return 0;
}
