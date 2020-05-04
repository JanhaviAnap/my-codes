#include<stdio.h>
#include<conio.h>
struct node {
    int data;
    struct node * next;
};
struct node *start = NULL;

int main(void) 
{
    struct node *ptr,*newnode;
    int val=1;
    while(val<=10) {
        newnode = malloc(sizeof(struct node));
        newnode->data = val;
        if(start==NULL) {
            newnode->next = NULL;
            start=newnode;
        }
        else {
            ptr=start;
            while(ptr->next!=NULL)
                ptr=ptr->next;
            ptr->next=newnode;
            newnode->next=NULL;
        }
    	val++;
    }
    ptr=start;
    while(ptr!=NULL) {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    
    return 0;
}
