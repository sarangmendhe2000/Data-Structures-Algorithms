//Doubly Ended Queue Implementation
#include <stdio.h>
#include <stdlib.h>

int dequeue[5];
int front=-1;
int rear=-1;
int data;

int main()
{
    printf("Please Enter Any Number Between 1 and 4\n");
        printf("Enter 1 for Enqueue from front\nEnter 2 for enqueue from rear\n");
        printf("Enter 3 for Dequeue from front\nEnter 4 for Dequeue from rear\n");
        printf("Enter 5 for Display the Queue\n");
        printf("Enter 6 for View the Element at front position\nEnter 7 for view the element at position rear ");
    int ch;

    do
    {
        printf("\nEnter Number for operation- ");


        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :enqueue_front();
                    break;
            case 2 :enqueue_rear();
                    break;
            case 3 :delete_front();
                    break;
            case 4 :delete_rear();
                    break;

            case 5 :display();
                    break;
            case 6 :get_front();
                    break;
            case 7 :get_rear();
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
void enqueue_front()
{

    if((front==0 && rear==5-1) || front==rear+1)
    {
        printf("Queue is Full");
    }
    else if(front==-1 && rear==-1)
    {
        printf("Enter the value you want to insert : ");
        scanf("%d",&data);
        front=rear=0;
        dequeue[front]=data;
    }
    else if(front==0)
    {
             printf("Enter the value you want to insert : ");
        scanf("%d",&data);
        front=5-1;
        dequeue[front]=data;
    }
    else
    {
        printf("Enter the value you want to insert : ");
        scanf("%d",&data);
        front--;
        dequeue[front]=data;
    }

}
void enqueue_rear()
{

    if((front==0 &&rear==5-1) || front==rear+1)
    {
        printf("Queue is Full");
    }
    else if(front==-1 && rear==-1)
    {
        printf("Enter the value you want to insert : ");
        scanf("%d",&data);
        front=rear=0;
        dequeue[rear]=data;
    }
    else if(rear==5-1)
    {
        printf("Enter the value you want to insert : ");
        scanf("%d",&data);
        rear=0;
        dequeue[rear]=data;
    }
    else
    {
        printf("Enter the value you want to insert : ");
        scanf("%d",&data);
        rear++;
        dequeue[rear]=data;
    }
}
void display()
{
    int i=front;
       if(front==-1 && rear==-1)
    {
        printf("Queue is Empty");
    }
    else
    while(i!=rear)
    {
        printf("%d ",dequeue[i]);
        i=(i+1)%5;
    }
    printf("%d ",dequeue[rear]);
}
void get_front()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("\nThe element at front position in the queue is %d",dequeue[front]);

    }
}
void get_rear()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("\nThe element at Rear position in the queue is %d",dequeue[rear]);

    }
}

void delete_front()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is Empty");
    }
    else if(front==rear)
    {
        printf("\nYou want to delete %d",dequeue[front]);
        printf("\n%d delete Successfully ! ",dequeue[front]);
        front=rear=-1;
    }
    else if(front==5-1)
    {
        printf("\nYou want to delete %d",dequeue[front]);
        printf("\n%d delete Successfully ! ",dequeue[front]);
        front=0;
    }

    else
    {
       printf("\nYou want to delete %d",dequeue[front]);
       printf("\n%d delete Successfully ! ",dequeue[front]);
       front++;
    }
}
void delete_rear()
{
     if(front==-1 && rear==-1)
    {
        printf("Queue is Empty");
    }
    else if(front==rear)
    {
        printf("\nYou want to delete %d",dequeue[rear]);
        printf("\n%d delete Successfully ! ",dequeue[rear]);
        front=rear=-1;
    }
    else if(rear==0)
    {
         printf("\nYou want to delete %d",dequeue[rear]);
         printf("\n%d delete Successfully ! ",dequeue[rear]);
         rear=5-1;
    }
    else
    {
         printf("\nYou want to delete %d",dequeue[rear]);
         printf("\n%d delete Successfully ! ",dequeue[rear]);
         rear--;
    }
}
