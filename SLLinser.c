#include<stdio.h>
typedef struct node
{
    int x;
    struct node *node;
}first*=NULL;
struct *node InsertFirst(struct node *first,int x)
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=first;
    first=ptr;
    return first;
};
void show(struct node *ptr)
{
    struct node *ptr=first;
    while(!ptr)
    {
        printf(ptr->data);
        ptr=ptr->next;
    }
}
