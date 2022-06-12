//Insertion At any point in DCLL
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
void insert_at_beginning()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value of node you want to be insert at Beginning\n");
    scanf("%d",&newnode->data);
    if(head==0)
    {
            head=tail=newnode;
            head->next=head;
            head->prev=head;

    }
    else
    {
        newnode->next=head;
        head->prev=newnode;
        newnode->prev=tail;
        tail->next=newnode;
        head=newnode;
    }
    printf("\nNode insert Successfully At the Beginning...........\n");
}
void insert_at_end()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value of node you want to be insert at End of the list\n");
    scanf("%d",&newnode->data);
    if(head==0)
    {
            head=tail=newnode;
            head->next=head;
            head->prev=head;

    }
    else
    {
        newnode->prev=tail;
        newnode->next=head;
        tail->next=newnode;
        head->prev=tail;
        tail=newnode;
    }
     printf("\nNode insert Successfully At the End...........\n");
}
void insert_at_position()
{
    int count=1;
    struct node *temp,*newnode;
    temp=head;
    while(temp->next!=head)
    {
        count++;
        temp=temp->next;
    }
    int pos,i=1;
  printf("\nEnter the position at which you want to enter the data: ");
  scanf("%d",&pos);
  if(pos==1)
  {
      insert_at_beginning();
  }
  else if(pos==count)
  {
      insert_at_end();
  }
 else if(pos>count || pos<=0)
  {
      printf("\nInvalid Position!\n");
  }
  else
  {
      newnode=(struct node*)malloc(sizeof(struct node));
      printf("Enter the value which you want to be insert at position %d : ",pos);
      scanf("%d",&newnode->data);
      while(i<=pos-1)
      {
          temp=temp->next;
          i++;
      }
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->next->prev=newnode;
printf("\nNode Insert Successfully on Given Position\n");
}}
