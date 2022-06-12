#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node * next;

}*head;
int main()
{
    int n,data;
    struct node *newnode;
    printf("Enter the number of nodes you want to create: ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("You choose  0 or any negative number \n please choose a positive number greater than 0   ");

    }
    else
    {
        create(n);
        display();
        insert_at_beginning(data);
        printf("\nYour new Data is ............\n");
        display();
        printf("Thank-you");
    }

}
void create(int n)
{
    int i,data;
    struct node *newnode,*temp;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==0)
    {
        printf("memory can not be allocated");
    }
    else
    {
        printf("Enter the value of node 1: ");
        scanf("%d",&head->data);
        head->next=0;
        temp=head;
        for(int i=2;i<=n;i++)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
            if(newnode==0)
            {
                printf("memory can not be allocated");
                break;
            }
            else
            {
                printf("Enter the value of node %d : ",i);
                scanf("%d",&newnode->data);
                newnode->next=0;
                temp->next=newnode;
                temp=temp->next;
            }
        }
    }
    printf("\nSingle linked list is created successfully \n");

}
  void display()
    {
        struct node *temp;
        if(head==0)
        {
            printf("List is empty");
        }
        else
        {
            temp=head;
            while(temp!=0)
            {
                printf("%d ",temp->data);
                temp=temp->next;
            }
        }
    }
    void insert_at_beginning(int data)
    {
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nPlease Enter the value you want to Inset at beginning :-> ");
        scanf("%d",&newnode->data);
        if(head==0)
        {
            newnode=head;
        }
        else
        {
            newnode->next=head;
            head=newnode;
            printf("\nData insert Successfully\n");
        }
    }
