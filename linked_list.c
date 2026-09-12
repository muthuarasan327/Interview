#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insert_node(struct Node **head,int value)
{
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data=value;
    newnode->next = *head;
    *head=newnode;
}

void display(struct Node *head)
{
    while(head != NULL)
    {
        printf("insert value:%d\n",head->data);
        head = head->next;
    }
}

void sort_array(struct Node *head)
{
    struct Node *i,*j;
    int temp;
    for(i=head;i!=NULL;i=i->next)
    {
        for(j=i->next;j!=NULL;j=j->next)
        {
            temp = i->data;
            i->data = j->data;
            j->data = temp;
        }
    }
}

int main()
{
    
}