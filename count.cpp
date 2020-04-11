#include<stdio.h>
int num(int a[20])
{
	int count=0,i;
	for(i=0;a[i]!='\0';i++)
		count++;
	return count;
}
int main()
{
	int count,a1[20],a2[20],na1,na2;
	printf("\Enter two numbers: \n");
	scanf("%s %s",a1,a2);
	na1=num(a1);
	na2=num(a2);
	if(na1==na2)
		printf("\nEqual");
	else
		printf("\nUnequal");
	return 0;
}
