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
    int val,c=0;
    printf("\nEnter values");
    scanf("%d", &val);
    while(val!=-1) {
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
        scanf("%d", &val);
    }
    printf("\nEnter value to be searched");
    scanf("%d",&val);
    for(ptr=start;ptr!=NULL;ptr=ptr->next){
        if(ptr->data==val){
            printf("\nFound!");
            c++;
            break;
        }
    }
    if(c==0)
        printf("\nValue not found! ");
    return 0;
}
