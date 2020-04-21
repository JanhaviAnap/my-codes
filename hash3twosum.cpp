#include<stdio.h>
#define size 200
int h[size];
void hash(int *a,int i)
{
	if(h[(a[i]%199)]==-1)
		h[(a[i])%199]=i;
}
int main()
{
	int i,n,t,conj,x,a[size];
	printf("\nEnter how many numbers: ");
	scanf("%d",&n);
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
	printf("\nEnter the target ");
	scanf("%d",&t);
	for(i=0;i<n;i++)
	{
		conj=t-a[i];
		hash(a,i);
		if((a[h[conj%199]]+a[i]==t)&&(h[conj%199]>=0))
		{
			printf("\nSolution=[%d,%d]",h[conj%199],i);
		}
	}
}
