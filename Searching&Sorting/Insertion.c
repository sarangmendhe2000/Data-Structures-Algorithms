//Descending order
#include<stdio.h>
int main()
{
    int n,i,j,temp;
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
    for(i=1;i<n;i++)
    {
        temp=A[i];
        j=i-1;
        while(j>=0 && A[j]<temp)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;
}

printf("\n\nSorted Array :\n");

    for(j=0;j<n;j++)
    {
        printf("%d  ",A[j]);
    }
    return 0;
}
