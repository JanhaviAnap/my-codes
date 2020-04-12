#include<stdio.h>
int main()
{
	int i,j,n;
	printf("\nEnter the value of n ");
	scanf("%d",&n);
	int a[n][n];
	int b[n];
	printf("\nEnter the elements for 5X5 matrix");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\na[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
    	b[i]=0;
	}
	for(j=0;j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			if(a[i][j]>=b[j])
				{
					b[j]=a[i][j];
				}
				
		}
	}
	for(j=0;j<5;j++)
	{
		printf("\nThe largest element in column %d is %d ",j+1,b[j]);

	}
	for(i=0;i<n;i++)
	{
		if(b[i]>=b[0])
		b[0]=b[i];
	}
	printf("\nThe largest elemennt of the matrix is %d",b[0]);
	return 0;
}
