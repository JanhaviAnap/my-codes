#include<stdio.h>
int fact(int);
int main()
{
	int n;
	printf("\nEnter number \n");
	scanf("%d",&n);
	if(n>=0)
		printf("\nFactorial of %d is %d ",n,fact(n));
	else
		printf("\nEnter valid input!");
	return 0;
}
int fact(int n)
{
	int f;
	if(n==0)
		return 1;
	f=n*fact(n-1);
	return f;
}
