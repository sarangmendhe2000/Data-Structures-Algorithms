//Circular Linked List Implementation
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;
int main()
{
    int n;
    printf("Enter total number of nodes");
    scanf("%d",&n);
    create(n);
    display();

}
void create(int n)
{
    struct node *newnode ,*temp;
    for(int i=1;i<=n;i++)
    {
        newnode=(struct ndoe*)malloc(sizeof(struct node));
        printf("Enter the value of node %d ",i);
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
            temp->next=head;
        }
    }
    printf("\nCircular linked list is created Successfully\n");
}
void display()
{

    struct node *temp;
    if(head==0)
    {
        printf("List is Empty");
    }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf(" %d",temp->data);
    }
}
