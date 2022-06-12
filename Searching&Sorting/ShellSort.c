#include <stdio.h>
#include <stdlib.h>

void shellSort(int arr[],int n)
{
    for(int gap=n/2;gap>=1;gap/=2)
    {
        for(int j=gap;j<n;j++)
        {
            for(int i=j-gap;i>=0;i-=gap)
            {
                if(arr[i+gap]>arr[i])
                {
                    break;
                }
                else
                {
                    int temp=arr[i+gap];
                    arr[i+gap]=arr[i];
                    arr[i]=temp;
                }
            }
        }
    }
}

int main()
{
    int arr[]={23,29,15,19,31,7,9,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    shellSort(arr,n);
    printf("After sorting the array.........\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
