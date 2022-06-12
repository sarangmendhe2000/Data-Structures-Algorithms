#include <stdio.h>
#include <stdlib.h>


int  getmax(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

    }
    return max;

}
countSort(int arr[],int n,int pos,int max)
{
    max=getmax(arr,n);
    int count[10]={0};
    int b[n];
    for(int i=0;i<n;i++)
    {
        ++count[(arr[i]/pos)%10];
    }
    for(int i=1;i<=n;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {

        b[--count[(arr[i]/pos)%10]]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=b[i];
    }
}
radixSort(int arr[],int n)
{

    int max=getmax(arr,n);
    for(int pos=1;max/pos>0;pos*=10)
    {
        countSort(arr,n,pos,max);
    }
}
int main()
{
    int arr[]={432,8,530,90,88,231,11,45,677,199};
    int n=sizeof(arr)/sizeof(arr[0]);
    getmax(arr,n);

    radixSort(arr,n);
    printf("the sorted array is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    }
