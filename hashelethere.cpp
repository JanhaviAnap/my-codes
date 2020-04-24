#include<stdio.h>
int h[200];
int hash(int *a,int n)
{
	for(int i=0;i<n;i++)
		h[a[i]]=i;	
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
    for(i=0;i<200;i++)
    	h[i]=-1;
    hash(a,n);
    if(h[t]!=-1)
    {
    	printf("\nElement found at position: [%d]",h[t]);
    	c++;
	}
	if(c==0)
		printf("\nElement not found ");
//    for(i=0;i<200;i++)
//        printf("\t%3d%3d",i,h[i]);
    return 0;
}
