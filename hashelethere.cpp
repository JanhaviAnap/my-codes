#include<stdio.h>
int h[200];
int hash(int *a,int n,int t)
{
    int pos;
	for(int i=0;i<n;i++)
	{
		h[a[i]]=a[i];
		if(t==a[i])
			pos=i;
	}
	return pos;	
}
int main(void)
{
    int a[200],n,t,i,c=0;
    printf("\nEnter no. of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nEnter the element to be searched: ");
    scanf("%d",&t);
    int pos=hash(a,n,t);
    if(h[t]==t)
    {
    	printf("\nElement found at position: [%d]",pos);
    	c++;
	}
	if(c==0)
		printf("\nElement not found ");
    for(i=0;i<200;i++)
        printf("\t%3d%3d",i,h[i]);
    return 0;
}
