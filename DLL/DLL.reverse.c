//Reverse the DLL
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
    if(n==0)
    {
        printf("list is Empty");
    }
    else if(n<0)
    {
        printf("You Entered any negative number Please Enter a positive number..");

    }
    else
    {



    create(n);
    display();
    reverse_Dll();
    display();



}
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
    printf("\nDLL is ready for print....\n");
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
         printf("\n");
    }
        void reverse_Dll()
    {



    struct node *current,*nextnode;
    current = head;
    while(current !=0)
    {
        nextnode=current->next;
        current->next=current->prev;
        current->prev=nextnode;
        current=nextnode;
    }
    current=head;
    head=tail;
    tail=current;
    printf("\nAfter Reversing the Doubly Linked List................\n");

    }
