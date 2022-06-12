//Implementation of Stack Using Linked List
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;

}*top=0;
int main()
{
      printf("Please Enter Any Number Between 1 and 4\n");
        printf("Enter 1 for Push Operation\nEnter 2 for pop operation\nEnter 3 for peak operation\nEnter 4 for Display the stack\n");
        printf("Enter 0 for Exit\n");
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
            case 0 :printf("\nThank You For Using the Code! Hope You have A Great Experience\npress 0 Again for exit ");
            default:
            printf("\nIt is Invalid Number! ");

        }
    }
    while(ch!=0);
    {
        getch();
    }




}
void push()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Value of you want to push in the Stack : ");
    scanf("%d",&newnode->data);
    newnode->next=top;
    top=newnode;

}
void display()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("List is empty");
    }
    else
    {
        while(temp!=0)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }

}
void peak()
{
    if(top==0)
    {
        printf("List is Empty");
    }
    else
    {
        printf("topmost Element in the stack is %d",top->data);
    }
}
void pop()
{
    if(top==0)
    {
        printf("\nUnderflow Condition............\n");
    }
    else
    {
        printf("\n%d is Removed from the Stack Successfully ! \n",top->data);
        struct node *temp;
        temp=top;
        top=top->next;
        free(temp);

    }
}
