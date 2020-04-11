#include<stdio.h>
int num(char a[20])
{
	int count=0,i,t;
	for(i=0;a[i]!='\0';i++)
	{
		t=a[i];
		if(t>='0'&&t<='9')
			count++;
	}
	return count;
}
int main()
{
	char a1[20],a2[20];
	int count,na1,na2;
	printf("\nEnter two numbers: \n");
	scanf("%s %s",a1,a2);
	na1=num(a1);
	na2=num(a2);
	if(na1==na2)
		printf("\nEqual");
	else
		printf("\nUnequal");
	return 0;
}
