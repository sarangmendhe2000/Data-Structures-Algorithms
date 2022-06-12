//Doubly Linked List Implementation for n nodes
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
    int n,data;

    printf("Enter How many nodes you Want ");
    scanf("%d",&n);
    create(n);
    display();
      insert_at_beginning();
    printf("\nNew DLL is ready for print\n");
    display();
    insert_at_End();
    printf("\nNew DLL is ready for print\n");
    display();
    insert_at_Position();
    printf("\nNew DLL is ready for print\n");
    display();
}
void create(int n)
{
    struct node *newnode,*temp;

     for(int i=1;i<=n;i++)
    {

        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value of Node %d : ",i);
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;

        if(head==0)
        {
              head=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }


    }
}
void display()
{
    struct node *temp;

         temp=head;
         while(temp!=0)
         {
             printf("%d ",temp->data);
             temp=temp->next;
         }
    }
    void insert_at_beginning()
    {
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the value you want to insert at beginning of the DLL : ");
        scanf("%d",&newnode->data);
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
    void insert_at_End()
    {
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the value you want to insert at End of the DLL : ");
        scanf("%d",&newnode->data);
        newnode->prev=tail->next;
        tail->next=newnode;
        tail=newnode;

    }


    void length()
    {
         int count=1;
    struct node*temp;
    temp=head;
    while(temp->next!=0)
    {
        count++;
        temp=temp->next;

    }


    }


    void insert_at_Position(int count)
    {
        int pos;
        int i=1;
        printf("\nEnter a Position You Want to Enter Data");
        scanf("%d",&pos);

        length();
        if(pos<=0 && pos>count)
        {
            printf("Please Enter a valid position");
        }
        else
        {
            struct node *newnode,*temp;
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("\nEnter the value you want to insert at %d psoition : ",pos);
            scanf("%d",&newnode->data);
            temp=head;
            while(i<pos-1)
            {
                temp=temp->next;
                i++;
            }
                newnode->next=temp->next;
                newnode->prev=temp;
                temp->next=newnode;
                newnode->next->prev=newnode;

            }



    }
