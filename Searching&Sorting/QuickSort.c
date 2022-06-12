#include<stdio.h>
void quickshort(int a[],int,int);
int partition(int arr[],int,int);
int main()
{
  int n,p,r,k,arr[100];
printf("Enter the no. of elements : ");
scanf("%d",&n);
printf("\nEnter the elements in array : ");
for(k=1;k<=n;k++)
{
    scanf("%d",&arr[k]);
} 
printf("Unsorted array\n");
for(k=1;k<=n;k++)
{
    printf("%d\t",arr[k]);
}

p=1;
r=n;
quickshort(arr,p,r);
   
printf("\nSorted array\n");                                            
for(k=1;k<=n;k++)
{
    printf("%d\t",arr[k]);
}
return 0;
}
 void quickshort(int a[],int p,int r)
{   
    int q;
    if(p<r)
    {
        q=partition(a,p,r);
        quickshort(a,p,q-1);
        quickshort(a,q+1,r);
    }
}
int partition(int a[],int p,int r)
{
    int x,j,i,temp;
    x=a[r];
    i=p-1;
    for(j=p;j<=r-1;j++)
    {
        if(a[j]<=x)
        {
            i=i+1;
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;   
        }
    }
    temp=a[r];
    a[r]=a[i+1];
    a[i+1]=temp;
    return (i+1);
}
