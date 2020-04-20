#include<stdio.h>
#define size 200
int h[size];
int hash(int *a)
{
	for(int i=0;i<size;i++)
	{
		int value=(a[i]*97)%199;
		if(h[value]==-1)
			h[value]=a[i];
	}
	return a[size];	
}
int main()
{
	int i,n,t,var,x;
	printf("\nEnter how many numbers: ");
	scanf("%d",&n);
	int a[size];
	for(i=0;i<size;i++)
	{
		h[i]=-1;
		a[i]=-1;
	}
	printf("\nEnter the numbers: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	hash(a);
	printf("\nEnter the target ");
	scanf("%d",&t);
	for(i=0;i<size;i++)
		printf("\n%5d%5d%5d",i,a[i],h[i]);
	for(i=0;i<n;i++)
	{
		var=t-a[i];
		if(h[(var*97)%199]==-1)
			continue;
		if(h[(var*97)%199]==var)
		{
			x=i;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==var)
		{
			printf("\nSolution:[%d,%d]",x,i);
			break;
		}
	}
}
