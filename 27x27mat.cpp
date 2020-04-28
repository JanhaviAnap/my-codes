#include<stdio.h>
int mat(int a[][27],int row,int col,int n)
{
	int i,j,t=0;
	for(i=row*3;i<(row*3)+3;i++)
	{
		for(j=col*3;j<(col*3)+3;j++)
		{
			if(t<a[i][j])
				t=a[i][j];
		}
	}
	return t;
}
int main()
{
	int i,j,k,n=27,a[27][27];
	printf("\nEnter the values of nxn\n");
	for(i=0;i<n;i++)//for input
	{
		for(j=0;j<n;j++)
		{
	//		printf("[%d][%d]= ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
    while(n!=3)
    {
    	printf("\n\n");
	    n/=3;
		for(i=0;i<n;i++)
    	{
    		printf("\n");
			for(j=0;j<n;j++)
			{
				a[i][j]=mat(a,i,j,n);
				printf("%4d",mat(a,i,j,n));
        	}
		}
	}
	return 0;
}
