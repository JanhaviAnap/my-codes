#include<stdio.h>
void check(int a[20],int n,int i,int t)
{
	int j;
	for(j=i+1;j<n;j++)
	{
		if(a[i]+a[j]==t)
			printf("\nSolution=[%d,%d]",i,j);	
	} 
}
int main ()
{
	int a[20],n,i,j,t;
	printf("\nEnter number of terms :");
	scanf("%d",&n);
	printf("\nEnter the terms: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nEnter the target: ");
	scanf("%d",&t);
	for(i=0;i<n;i++)
	{
		check(a,n,i,t);
	}
}
