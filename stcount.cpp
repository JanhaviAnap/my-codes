#include<stdio.h>
#include<string.h>
char edit(char a[20])
{
	int i,j=0,t;
	char b[20];
	for(i=0;i<strlen(a);i++)
	{
		t=a[i];
		if(t>=97||t<=122)
			b[j]=a[i];
		else if(t='#')
		{
			j--;
			if(j<0)
				j=0;
			b[j]=a[i];
		}
	}
	return *b;
}
int main()
{
	char strt,strs,s[20],t[20];
	printf("\nEnter s= ");
	scanf("%s",s);
	printf("\nEnter t= ");
	scanf("%s",t);
	strs=edit(s);
	strt=edit(t);
	if(strs==strt)
		printf("\nTrue");
	else
		printf("\nFalse");
	return 0;
}
