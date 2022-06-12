//Implementation of Queue Using Stack
#include <stdio.h>
#include <stdlib.h>

int S1[5];
int S2[5];
int top1=-1;
int top2=-1;
int count=0;
int main()
{
    printf("Please Enter Any Number Between 1 and 4\n");
        printf("Enter 1 for Enqueue Operation\nEnter 2 for Dequeue operation\nEnter 3 for Display the Queue\n");
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

            case 3 :display();
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
void push1()
{
    int data;
    if(top1==5-1)
    {
        printf("Queue is Full");
    }
    else
        {
            printf("Enter the value you want to be insert : ");
            scanf("%d",&data);

         top1++;
         S1[top1]=data;
         printf("\nData insert successfully\n");
        }
}
void push3(int data)
{
    top1++;
    S1[top1]=data;
}
void push2(int data)
{
    if(top2==5-1)
    {
        printf("Queue is Full");
    }
    else
    {
        top2++;
        S2[top2]=data;
    }
}
int pop1()
{
    return S1[top1--];
}
int pop2()
{
    return S2[top2--];
}
void enqueue()
{
    push1();
    count++;
}
void dequeue()
{
    int a,b,c;
    if(top1==-1 && top2==-1)
    {
        printf("Queue is Empty");
    }
    else
    {
        for(int i=0;i<count;i++)
        {
            a=pop1();
            push2(a);
        }
        b=pop2();
        printf("\nYou want to delete %d ",b);
        printf("\n%d Delete Successfully ! \n",b);
        count--;
        for(int i=0;i<count;i++)
        {
            c=pop2();
            push3(c);
        }
    }
}
void display()
{
    if(top1==-1 && top2==-1)
    {
        printf("Queue is Empty");
    }
    else
    {
        for(int i=0;i<=top1;i++)
        {
            printf("%d ",S1[i]);
        }
    }
}
