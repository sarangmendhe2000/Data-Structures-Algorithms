//Implementation of Stack Using Array or static memory allocation
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int stack[5];
int top=-1;
int main()
{
     printf("Please Enter Any Number Between 1 and 4\n");
        printf("Enter 1 for Push Operation\nEnter 2 for pop operation\nEnter 3 for peak operation\nEnter 4 for Display the stack\n");
    int ch;

    do
    {
        printf("\nEnter Number for operation- ");


        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :push();
                    break;
            case 2 :pop();
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
void push()
{

int data;
printf("Enter data ");
scanf("%d",&data);
if(top==5-1)
{
    printf("Overflow condition");
}
else
{
    top++;
    stack[top]=data;
    printf("Data Insert Successfully");
}
}
void pop()
{
    if(top==-1)
    {
        printf("Underflow Condition ! ");
    }
    else
    {
        int item;
        item=stack[top];
        top--;
        printf("\nDeleted Item is %d",item);
        printf("\nItem Delete Successfully ! \n");
    }

}
void peak()
{
    int item;
    if(top==-1)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("Topmost Element of Stack is %d",stack[top]);
    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack is Empty");
    }
    else
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}
