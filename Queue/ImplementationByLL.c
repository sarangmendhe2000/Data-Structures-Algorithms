//Implementation of Queue using Linked List
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front =0;
struct node *rear=0;
int main()
{
  printf("Please Enter Any Number Between 1 and 4\n");
        printf("Enter 1 for Enqueue Operation\nEnter 2 for Dequeue operation\nEnter 3 for peak operation\nEnter 4 for Display the queue\n");
        int ch;

    do
    {
        printf("\nEnter Number for operation- ");


        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :enqueue();
                    break;
            case 2 :dequeue();
                    break;
            case 3 :peak();
                    break;
            case 4 :display();
                    break;
            default:
            printf("Invalid Number! ");

        }
    }
    while(ch!=0);
    {
        getch();
    }


}
void enqueue()
{

    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Value You Want to insert in the queue : ");
    scanf("%d",&newnode->data);
    if(front==0 && rear==0)
    {
        front=rear=newnode;
        newnode->next=0;
    }
    else
    {
        rear->next=newnode;
        newnode->next=0;
        rear=newnode;
        printf("\n%d insert Successfully ! ",newnode->data);
    }

}
void dequeue()
{
    struct node *temp;
    temp=front;
    printf("\nYou Want to delete %d ",front->data);
    printf("\n%d Delete successfully....\n",front->data);
    front=front->next;
    free(temp);


}

void peak()
{
    if(front==0 && rear==0)
    {
        printf("List is Empty");

    }
    else
    {
        printf("The First Element of the Queue is %d ",front->data);
    }
}
void display()
{
    struct node *temp;
    if(front==0 && rear==0)
    {
        printf("List is Empty");
    }
    else
    {
        temp=front;
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
