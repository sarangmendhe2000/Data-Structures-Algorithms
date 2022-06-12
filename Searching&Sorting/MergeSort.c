#include<stdio.h>

void mergesort(int a[],int,int);
void merge(int a[],int,int,int);

int main()
{
   int i,n,k,l,u,m;
   printf("Enter the no. of elements : ");
   scanf("%d",&n);
   int arr[n];
   l=1;
   u=n;
   printf("\nEnter the elements in array : ");
   for(k=1;k<=n;k++)
   {
   scanf("%d",&arr[k]);
   }

   printf("\nUnsorted elements\n");
   for(k=1;k<=n;k++)
  {
       printf("%d\t",arr[k]);
  }

   mergesort(arr,l,u);

  printf("\nSorted elements\n");
   for(k=1;k<=n;k++)
   printf("%d\t",arr[k]);
   return 0;
}

void mergesort(int a[],int l,int u)
{
   int m;
   if(l<u)
   {
   	m=(l+u)/2;
   	mergesort(a,l,m);
   	mergesort(a,m+1,u);
   	merge(a,l,m,u);
	}
}

void merge(int a[],int l,int mid,int u)
{
	int b[100],i,j,k,p;
	i=l;
	k=l;
	j=mid+1;

	while(i<=mid && j<=u)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
			k++;
		}
		else
		{
			b[k]=a[j];
			j++;
			k++;
		}

	}
	if(i>mid)
	{
		while(j<=u)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
    else
    {
	    while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}

	for(k=1;k<=u;k++)
	{
	  a[k]=b[k];
    }
}
