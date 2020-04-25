#include<stdio.h>
int h[200];
void hash(int x)
{
	h[x]=h[x]+1;	
}
int main(void)
{
    int i,a[5];
    printf("\nEnter the elements: ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<200;i++)
    	h[i]=0;
    for(i=0;i<5;i++)
    {
        hash(a[i]);
        if(h[a[i]]==2)
        {
            printf("\nThe repeated number is: %d",a[i]);
            break;
        }
    }
    return 0;
}
