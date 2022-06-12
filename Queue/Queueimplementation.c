//Implementation of Queue using Array
#include <stdio.h>
#include <stdlib.h>

int queue[5];
int front=-1;
int rear=-1;

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
            case 1 :enqueqe();
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
void enqueqe()
{
    int data;
    printf("\nEnter the data you want to Insert in Queue\n");
    scanf("%d",&data);
    if(rear==5-1)
    {
        printf("Overflow condition");
    }
    else if(rear==-1 && front ==-1)
    {
        front=rear=0;
        queue[rear]=data;

    }
    else
    {
        rear++;
        rear[queue]=data;
        printf("\nData insert Successfully\n");
    }

}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("List is Empty");
    }
    else if(front==rear)
    {
        front=rear=-1;
        printf("List is Empty Now");
    }
    else
    {
        printf("\nYou want to delete the element %d ",queue[front]);
        printf("\n%d delete Successfully\n",queue[front]);
        front++;
        printf("\nData deleted successfully");

    }
}
void display()
{
    if(front==-1 && rear==-1)
    {
        printf("List is Empty");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {

            printf("%d ",queue[i]);
        }
    }
}
void peak()
{
        if(front==-1 && rear==-1)
    {
        printf("List is Empty");
    }
    else
    {
        printf("First element of the queue is %d",queue[front]);
    }
}
