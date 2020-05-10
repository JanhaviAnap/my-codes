#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
};
struct node *start = NULL;

int main(void) 
{
    struct node *ptr,*newnode;
    int val,a[5],i,num;
    printf("Enter 5 elements");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++) {
        newnode = malloc(sizeof(struct node));
        newnode->data =a[i];
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
    }
    printf("\n Enter the element to be searched");
    scanf("%d",&num);
    ptr=start;
    while(ptr!=NULL) {
        if(ptr->data==num)
            printf("\nElement found!");
        ptr=ptr->next;
    }
    
    return 0;
}
