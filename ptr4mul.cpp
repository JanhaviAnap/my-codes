#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node*start=NULL;

int main(){
	struct node *ptr,*newnode;
	int n,i=1;
	scanf("%d",&n);
	while(i<=10){
		newnode=malloc(sizeof(struct node));
		newnode->data=n*i;
		if(start==NULL){
			newnode->next=NULL;
			start=newnode;
		}
		else{
			ptr=start;
			while(ptr->next!=NULL)
				ptr=ptr->next;
			ptr->next=newnode;
			newnode->next=NULL;
		}
		i++;
	}
	ptr=start;
	i=1;
	while(i<=10){
		printf("\n%d * %d = %d",n,i,ptr->data);
		ptr=ptr->next;
        i++;
	}
	return 0;
	
}
