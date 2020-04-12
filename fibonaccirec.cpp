#include<stdio.h>
int fibonacci(int);
int main()
{
	int n,i;
	printf("\nEnter number of terms :\n");
	scanf("%d",&n);
	if(n>0)
	{
		printf("\nThe series: ");
		for(i=0;i<n;i++)
			printf("\n%d",fibonacci(i));
	}
	return 0;
}
int fibonacci(int n)
{
	if((n==0)||(n==1))
		return n;
	else
		return(fibonacci(n-2)+fibonacci(n-1));
}
