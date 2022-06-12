//CLL Insert at Any Position
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
    insert_at_beginning();
    display();
    insert_at_end();
    display();
    insert_at_position();
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
void insert_at_beginning()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data or Number You want to add at the beginning of the list : ");
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
    }

}
void insert_at_end()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data or Number You want to add at the End of the list : ");
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
void insert_at_position()
{
    int pos;
    int i=1;
    struct node *temp,*newnode;
    int count=1;
    temp=tail->next;
    while(temp->next!=tail->next)
    {
        count++;
        temp=temp->next;
    }
    printf("\nEnter the position on which you want to Enter Data");
    scanf("%d",&pos);
    if(pos==1)
    {
        insert_at_beginning();
    }

    else if(pos>count || pos<=0)
    {
        printf("\nInvalid Position!\nPlease select Number between 1 and %d\n",count);
    }
    else
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter Value you want to insert at position %d: ",pos);
        scanf("%d",&newnode->data);
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
