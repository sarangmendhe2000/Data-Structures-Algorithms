//Implementation of Circular Queue Using Linked List
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*next;
}*front,*rear;
int main()
{
    printf("Please Enter Any Number Between 1 and 4\n");
        printf("Enter 1 for Enqueue Operation\nEnter 2 for Dequeue operation\nEnter 3 for peak operation\nEnter 4 for Display the stack\n");
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
    printf("Enter the value you want to insert in Queue : ");
    scanf("%d",&newnode->data);


    if(rear==0)
    {
        front=rear=newnode;
        rear->next=newnode;
    }
    else
    {
        rear->next=newnode;
        newnode->next=front;
        rear=newnode;
    }
    printf("\nData Insert Successfully ! ");
}
void dequeue()
{
    struct node *temp;
    temp=front;
    if(front==0 && rear==0)
    {
        printf("List is Empty");
    }
    else if(front==rear)
    {
          printf("\nYou want to delete %d",front->data);
        printf("\n%d Delete Successfully ! ",front->data);
        front=rear=0;
        free(temp);
    }
    else

    {
        temp=front;
        printf("\nYou want to delete %d",front->data);
        printf("\n%d Delete Successfully ! ",front->data);

        front=front->next;
        rear->next=front;
        free(temp);

    }
}
void display()
{
    struct node *temp;
    temp=front;
    if(rear==0 && front==0)
    {
        printf("List is Empty");
    }
    else
    {
        while(temp->next!=front)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d ",temp->data);
    }
}
void peak()
{
    if(rear==0 && front==0)
    {
        printf("List is Empty");
    }
    else
    {
        printf("Topmost Element in the Queue is %d ",front->data);
    }

}
