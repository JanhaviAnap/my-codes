#include<stdio.h>
#include<string.h>
void del(char *a,int m)
{
	int i,pos=0;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==m)
		{
			pos=i;
			break;
		}
	}
	for(i=pos;i<strlen(a);i++)
		a[i]=a[i+1];
}
int main()
{
	int i,j,n,t,m1,m2;
	printf("\nNumber of stones? ");
	scanf("%d",&n);
	char a[n];
	printf("\nEnter weight of the stones ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	do
	{
		for(i=0;i<strlen(a);i++)//loop to arrange them in descending order
		{
			for(j=i+1;j<strlen(a);j++)
			{
				if(a[j]>=a[i])
				{	
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
		if(a[0]==a[1])
		{
			del(a,a[0]);
			del(a,a[0]);//the array shifts back by one index
		}
		else
		{
			a[1]=a[0]-a[1];
			del(a,a[0]);
		}
	}while(strlen(a)!=0&&strlen(a)!=1);//compares 1st and 2nd largest element

	if(a[0]==0)
		printf("\nThe final weight is 0");
	else
		printf("\nThe final weight is %d",a[0]);
	return 0;	
}
