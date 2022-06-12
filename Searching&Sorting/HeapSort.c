#include<stdio.h>
#define MAX 100
void build_heap(int H[],int n)
{
      int i,j,k,v,heap;
      for(i=n/2;i>=1;i--)
      {
        k=i;
        v=H[k];
        heap=0;
        while(heap==0 && (2*k)<=n)
        {
                j=2*k;
                if(j<n)
                {
                 if(H[j]<H[j+1])
                 j++;
                }
                if(v>=H[j])
                    heap=1;
                else
                {
                    H[k]=H[j];
                    k=j;
                }
        }
        H[k]=v;
      }
}
void HeapSort(int heap[],int n)
{
      int t,i;
      for(i=n;i>=1;i--)
      {
            build_heap(heap,i);
            t=heap[1];
            heap[1]=heap[i];
            heap[i]=t;
      }
}
int main()
{
      int arr[MAX],size,i;
      printf("\tHeap sort\n");
      printf("-----------------------------------\n");
      printf(" How many numbers you want to sort?: ");
      scanf("%d",&size);
      printf("\n Enter %d numbers: \n",size);
      for(i=1;i<=size;i++)
            scanf("%d",&arr[i]);
      HeapSort(arr,size);
      printf("\n Sorted elements after using heap sort: \n\n");
      for(i=1;i<=size;i++)
      {
            printf("\t%d",arr[i]);
      }
return 0;
}
