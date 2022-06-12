//Insert at specific position
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node * next;

}*head;
int main()
{
    int n,data,count=0;
    struct node *newnode,*temp;
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
        temp=head;
        while(temp!=0)
        {
            count++;
            temp=temp->next;
        }
        insert_at_position(data,count);



        printf("\n Thank-you");
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
    void insert_at_position(int data,int count)
    {
        int pos,i=1;
        struct node *newnode,*temp;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter position on which you want to insert new value : ");
        scanf("%d",&pos);
        if(pos>count)
        {
            printf("\nPlease enter correct position\nThe length of linked list is not %d ",pos);
        }
        else if(pos<=0)
        {
            printf("\nPlease choose the correct position\nPlease choose a number between 1 and %d",count);
        }
        else
        {


        printf("\nEnter the value you want to enter at new position ");
        scanf("%d",&newnode->data);
        if(newnode==0)
        {
            printf("memory cannot be allocated");
        }
        else
        {
            if(pos==1)
            {
                newnode->next=head;
                head=newnode;
            }
         else{

        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        printf("Data entered successfully");
         printf("\nYour new Data is ............\n");
         display();
    }

    }
    }
    }
