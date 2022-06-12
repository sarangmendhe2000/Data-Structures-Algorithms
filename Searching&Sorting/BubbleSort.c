#include<stdio.h>
int main()
{
    int n,i,j,temp,flag=0;
int A[100];

    printf("Enter number of elements in array :");
    scanf("%d",&n);
printf("\nEnter value of elements :");

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
printf("\nUnsorted Array :\n");

    for(i=0;i<n;i++)
    {
        printf("%d  ",A[i]);
    }
    for(i=0;i<n-1;i++)
    {
    	flag=0;
        for(j=0;j<n-1-i;j++)
        {
           if(A[j]>A[j+1])
          { 
           temp=A[j];
           A[j]=A[j+1];
           A[j+1]=temp;
           flag=1;
          }
        }
        if(flag==0)
        {
        	break;
	     }
    }
printf("\n\nSorted Array :\n");

    for(j=0;j<n;j++)
    {
        printf("%d  ",A[j]);
    }
    return 0;
}
