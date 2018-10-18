#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
bool firstalgo(long n){
	int i;
	//printf("%ld",n);
	if (n == 1)
	{
		//printf("est premier\n");
		return true;
	}
	for (i = 2; i < n;i++)
	{
		if (n % i == 0)
		{		
			//printf("n'est pas premier\n");
			return false;
		}
	}
	//printf("est premier\n");
	return true;
}
bool secondalgo(long n){
	int i;
	//printf("%ld",n);
	if (n == 1)
	{
		//printf("est premier\n");
		return true;
	}
	for (i = 2; i < n/2;i++)
	{
		if (n % i == 0)
		{		
			//printf("n'est pas premier\n");
			return false;
		}
	}
	//printf("est premier\n");
	return true;
}
bool thirdalgo(long n){
	int i;
	//printf("%ld\n",n);
	if (n == 1)
	{
		//printf("est premier\n");
		return true;
	}
	for (i = 2; i < sqrt(n);i++)
	{
		if (n % i == 0)
		{	
			//printf("n'est pas premier\n");	
			return false;
		}
	}
	//printf("est premier\n");
	return true;
}

int main(int argc, char const *argv[])
{
	int n,i;
	clock_t t1,t2;
	bool resu;
	long tab[12] = {1000003,2000003,4000037,8000009,16000057,32000011,64000031,128000003,256000001,512000009,1024000009,2048000011};
	for (i = 0; i < 12;i++)
	{
		t1=clock();
		resu=firstalgo(tab[i]);
		t2=clock();
		printf("[%ld,%d],",tab[i],t2-t1);
	}
	printf("\n");
	for (i = 0; i < 12;i++)
	{
		t1=clock();
		resu=secondalgo(tab[i]);
		t2=clock();
		printf("[%ld,%d],",tab[i],t2-t1);
	}
	printf("\n");

	for (i = 0; i < 12;i++)
	{
		t1=clock();
		resu=thirdalgo(tab[i]);
		t2=clock();
		printf("[%ld,%d],",tab[i],t2-t1);
	}
	return 0;
}
