#include<stdio.h>
void arrange(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)//loop to arrange them in descending order
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]>=a[i])
				{	
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
	for(i=0;i<n;i++)
	{
		printf("%3d",a[i]);
	}
	printf("\n");
}
int rec(int a[],int n)
{
	arrange(a,n);
	if(a[0]==a[1])
		a[0]=0,a[1]=-1;
	else
		a[0]=a[0]-a[1],a[1]=-1;
	arrange(a,n);
	if(a[1]==-1)
		return a[0];
	else
		rec(a,n);
}
int main()
{
	int i,j,n,t,m1,m2;
	printf("\nNumber of stones? ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter weight of the stones ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nThe weight of stone is= %d",rec(a,n));
	return 0;
}
