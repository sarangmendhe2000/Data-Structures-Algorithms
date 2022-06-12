//Reverse The CLL

#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
}*tail;
int main()
{
    int n;
    printf("Enter total Number of nodes : ");
    scanf("%d",&n);
    create(n);
    display();
    reverse();
    display();
}
void create(int n)
{
    struct node *newnode;
    for(int i=1;i<=n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter the value of node %d : ",i);
        scanf("%d",&newnode->data);
        if(tail==0)
        {
            tail=newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
    }
}
void display()
{
    struct node *temp;
    if(tail==0)
    {
        printf("List is Empty");

    }
    else
    {
        temp=tail->next;
        while(temp->next!=tail->next)
        {
            printf("%d " ,temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);

    }
}
void reverse()
{
    struct node *prev,*current,*nextnode;
    current=tail->next;
    nextnode=current->next;
    if(tail==0)
    {
        printf("list is Empty");
    }

    else
    {
        while(current!=tail)
        {
            prev=current;
            current=nextnode;
            nextnode=current->next;
            current->next=prev;
        }
        nextnode->next=tail;
        tail=nextnode;
    }
    printf("\nAfter reversing the Data in the CLL...........\n");
}
