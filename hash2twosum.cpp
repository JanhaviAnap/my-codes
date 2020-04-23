#include<stdio.h>
int h[200];
void hash(int i,int var)
{
    h[var%199]=i;
}
int main(void)
{
    int a[200],n,t,i,var;
    printf("\nEnter no. of input: ");
    scanf("%d",&n);
    printf("\nEnter the inputs: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the target sum: ");
    scanf("%d",&t);
    for(i=0;i<200;i++)
    {
        h[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        var=t-a[i];
        if(var<=0)
            continue;
        hash(i,var);
        if(h[a[i]%199]!=-1&&h[var%199]!=-1)
        {
	        if(a[h[a[i]%199]]+a[h[var%199]]==t)
    	        printf("\n solution=[%d,%d]\n",h[a[i]%199],h[var%199]);  
		}
    }
//    for(i=0;i<200;i++)
//        printf("\t%3d%3d",i,h[i]);
    return 0;
}
