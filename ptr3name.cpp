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
    char name;
    scanf("%c", &name);
    while(name!='.') {
        newnode = malloc(sizeof(struct node));
        newnode->data = name;
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
        scanf("%c", &name);
    }
    ptr=start;
    while(ptr!=NULL) {
        printf("%c\n",ptr->data);
        ptr=ptr->next;
    }
    
    return 0;
}
