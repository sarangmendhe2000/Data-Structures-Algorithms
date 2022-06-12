//Implementation of Circular Queue Using Array
#include <stdio.h>
#include <stdlib.h>


 int queue[6];
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
    int data;
    printf("Enter the number you want to be insert in the queue : ");
    scanf("%d",&data);
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=data;

    }
    else if((rear+1)%6==front)
    {
        printf("Queue is Full");
    }
    else

    {
         rear=((rear+1)%6);
         queue[rear]=data;
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
           printf("\nYou Want to delete %d ",queue[front]);
        printf("\n%d delete successfully ! ",queue[front]);
        front=rear=-1;

    }
    else
    {
        printf("\nYou Want to delete %d ",queue[front]);
        printf("\n%d delete successfully ! ",queue[front]);
        front=((front+1)%6);
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
        int i=front;
        while(i!=rear)
        {
            printf("%d ",queue[i]);
            i=(i+1)%6;
        }
        printf("%d",queue[rear]);
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
        printf("The topmost element of the Queue id %d ",queue[front]);
    }
}
