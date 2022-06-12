//Deletion in DCLL in Doubly Circular Linked List
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
}*head,*tail;
int main()
{
    int n;
    printf("Enter the Total number of nodes : ");
    scanf("%d",&n);
    create(n);
    display();
    delete_from_beginning();
    display();
    delete_from_end();
    display();
    delete_from_position();
    display();
}
void create(int n)
{
    struct node *newnode;
    for(int i=1;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value of node %d: ",i);
        scanf("%d",&newnode->data);
        if(head==0)
        {
            head=tail=newnode;
            head->next=head;
            head->prev=head;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            newnode->next=head;
            head->prev=newnode;
            tail=newnode;
        }
    }
}
void display()
{
    struct node *temp;
    temp=head;
    if(head==0)
    {
        printf("List is Empty");
    }

    else
        while(temp!=tail)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
void delete_from_beginning()
{

    struct node *temp;

    temp=head;
    if(head==0)
    {
      printf("List is Empty");
    }
    else if(head->next==head)
    {
        head=tail=0;
        free(head);
    }
    else
    {


    tail->next=temp->next;
    tail->next->prev=tail;
    head=temp->next;
    free(temp);
    printf("\nAfter deleting node from First Position\n");
    }
}
void delete_from_end()
{
     struct node *temp;
    temp=head;
    if(head==0)
    {
      printf("List is Empty");
    }
    else if(head->next==head)
    {
        printf("\nAfter deleting node from End Position\n");
        printf("\nList is Empty\n");
        head=tail=0;
        free(head);

    }

    temp=tail;
    temp->prev->next=head;
    tail=temp->prev;
    free(temp);
    printf("\nAfter deleting node from End Position\n");
}
void delete_from_position()
{
    struct node *temp;
    int count=1;
    int pos,i=1;
    temp=head;
    while(temp->next!=tail->next)
    {
        count++;
        temp=temp->next;
    }
    printf("\nEnter the position from which you want to delete data\n");
    scanf("%d",&pos);
    if(head==0)
    {
        printf("List is Empty");
    }
    else if(head->next==head)
    {
        printf("\nAfter deleting node from Given Position\n");
        printf("\nList is Empty\n");
        head=tail=0;
        free(temp);
    }

    if(pos==1)
    {
        delete_from_beginning();
    }
    else if(pos>count ||pos<=0)
    {
        printf("\nInvalid Position\n");
    }
    else if(pos == count)
    {
        delete_from_end();
    }
    else
    {
        while(i<=pos)
        {
            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
        printf("\nAfter deleting node from Given Position\n");
    }

}
