//CLL Delete from any position
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
    delete_from_beg();
    display();
    delete_from_end();
    display();
    delete_from_pos();
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
void delete_from_beg()
{



    struct node *temp;
    temp=tail->next;
    if(tail==0)
    {
        printf("List is Empty");
    }
    else if(temp->next==temp)
    {
        tail=0;
        free(temp);
    }
    else
    {
        tail->next=temp->next;
        free(temp);
    }
    printf("\nAfter Deleting Node From First Position\n");
}
void delete_from_end()
{
    struct node *prev,*current;
    current=tail->next;
    if(tail==0)
    {
        printf("List is Empty");
    }
    else if(current->next==current)
    {
        tail=0;
        free(current);
    }
    else
    {
        while(current->next!=tail->next)
        {
            prev=current;
            current=current->next;
        }
        prev->next=tail->next;
        tail=prev;
        free(current);
    }
    printf("\nAfter Deleting Node From End of the list\n");
}
void delete_from_pos()
{
     int count=1;
    struct node *temp;
    temp=tail->next;
    while(temp->next!=tail->next)
    {
        count++;
        temp=temp->next;
    }

    struct node *nextnode;
    int i=1,pos;
    printf("\nEnter the position You want to delete the data\n");
    scanf("%d",&pos);
    if(pos>count || pos<=0)
    {
        printf("Invalid Position!");
    }
    else if(pos==1)
    {
        delete_from_beg();
    }
    else if(pos==count)
    {
        delete_from_end();
    }
    else
    {
        temp=tail->next;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        nextnode=temp->next;
        temp->next=nextnode->next;
        free(nextnode);
    }
    printf("\nAfter Deleting Node From  Position %d \n",pos);
}
