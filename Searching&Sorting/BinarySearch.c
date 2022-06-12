#include <stdio.h>
int main()
{
int a[100], search, c, n,first,last,middle;
printf("Enter number of elements in array: ");
scanf("%d", &n);

printf("Enter %d integer in ascending order:\n", n);
for (c = 0; c < n; c++)
scanf("%d", &a[c]);

printf("Enter a number to search :\n");
scanf("%d", &search);

 first = 0; 
 last = n-1; 	
 middle = (first+last)/2; 

while (first <= last) 	
{ 		
 if(a[middle] < search) 		
{ 		
	first = middle + 1; 	
} 		
 else if(a[middle] == search) 		
{ 			
 printf("%d found at location %d\n", search, middle+1); 		
	break; 		
} 		
 else 	
	{ 		
  	  last = middle - 1; 	
	} 
		middle = (first + last)/2; 
}
 	
if(first > last) 
	{ 	
	printf("Not found! %d is not present in the list.",search); 
	}

return 0;

}
