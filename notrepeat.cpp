#include<stdio.h>
int main()
{
	int i,n,num=0;
	printf("\nEnter the number of elements");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n;i++)
		a[0]^=a[i];
	printf("\nNon-repeating number= %d",a[0]);
	return 0;
}
