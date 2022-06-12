//Delete from beginning ,end and from any position in DLL


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
}*head,*tail;
int main()
{
    int n,data;

    printf("Enter How many nodes you Want ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("list is Empty");
    }
    else if(n<0)
    {
        printf("You Entered any negative number Please Enter a positive number..");

    }
    else
    {



    create(n);
    display();


    delete_from_Beginning();
    display();
    delete_from_End();
    display();
              int count =1;

    struct node *temp;
    temp=head;
    while(temp->next!=0)
    {
        count++;
        temp=temp->next;
    }

    delete_from_position(count);
    display();

}
}
void create(int n)
{
    struct node *newnode,*temp;

     for(int i=1;i<=n;i++)
    {

        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value of Node %d : ",i);
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;

        if(head==0)
        {
              head=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }


    }
    printf("\nDLL is ready for print....\n");
}
void display()
{
    struct node *temp;

         temp=head;
         while(temp!=0)
         {
             printf("%d ",temp->data);
             temp=temp->next;
         }
         printf("\n");
    }
    void delete_from_Beginning()
    {
        struct node *temp;
        temp=head;
        if(head==0)
        {
            printf("List is Empty");
        }
        head=temp->next;
        temp->next->prev=0;
        free(temp);
        printf("\nAfter Deleting from beginning of DLL \nNew DLL is ready for print.............\n\n");
    }
    void delete_from_End()
    {
        struct node *temp;
        temp=tail;
        tail->prev->next=0;
        tail=tail->prev;
        free(temp);
        printf("\nAfter delete Data From End \nNew DLL is ready for print.....\n");
    }
    void delete_from_position(int count)
    {


          int pos,i=1;

    printf("Enter Position From which You want to delete the data : ");
    scanf("%d",&pos);
    if(pos<=0)
    {
        printf("You Enter 0 or any negative number\nPlease choose ant positive number which is Greater than 0 and less than or equal to %d ",count);
    }
    else if(pos>count)
    {
        printf("\nYou choose the number which is greater than the length of DLL\nLength of DLL is %d",count);
    }
    else if(pos==1)
    {
        delete_from_Beginning();
    }

    else if(pos>1 && pos<count)
    {
        struct node *temp;
        temp=head;
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
    }
    else
    {
        delete_from_End();

    }
    printf("\nAfter Delete From position %d ",pos);
    printf("\nAfter delete data New DLL is Ready For Print\n");

    }
