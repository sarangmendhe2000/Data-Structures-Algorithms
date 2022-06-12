// Implementation of Binary Tree and pre,pos and inorder Traversal
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left,*right;
};

struct node * create()
{
    int data;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&data);
    if(data==-1)
    {
        printf("You want to Enter 0 in Right or Left child of %d  or you want to Enter -1 in place of data : ",data);
        scanf("%d",&data);
        if(data==0)
        {
            return 0;
        }
        else if(data==-1)
        {
            newnode->data=data;
            printf("\nEnter left child of %d : ",data);
            newnode->left=create();
            printf("\nEnter Right child of %d : ",data);
            newnode->right=create();
        }
    }
    else
    {
        newnode->data=data;
        printf("\nEnter left child of %d : ",data);
        newnode->left=create();
        printf("\nEnter Right child of %d : ",data);
        newnode->right=create();
    }

};

void preorder(struct node *root)
{
    if(root==0)
    {
        return;
    }
    else
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void Inorder(struct node *root)
{
     if(root==0)
    {
        return;
    }
    else
    {
        Inorder(root->left);
        printf("%d ",root->data);
        Inorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root==0)
    {
        return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
int main()
{
    printf("Enter -1 if you want to put 0 in left or right child\n");
    printf("\nEnter data : ");
    struct node *root;
    root=0;
    root=create();
    printf("\n Preorder Traversal of the tree is ............\n");
    preorder(root);
    printf("\n Inorder Traversal of the tree is ............\n");
    Inorder(root);
    printf("\n Postorder Traversal of the tree is ............\n");
    postorder(root);

}
//heapify method

#include <stdio.h>
  
  // Function to swap the the position of two elements
  void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
  
  void heapify(int arr[], int n, int i) {
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
  
    // Swap and continue heapifying if root is not largest
    if (largest != i) {
      swap(&arr[i], &arr[largest]);
      heapify(arr, n, largest);
    }
  }
  
  // Main function to do heap sort
  void heapSort(int arr[], int n) {
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
  
    // Heap sort
    for (int i = n - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]);
  
      // Heapify root element to get highest element at root again
      heapify(arr, i, 0);
    }
  }
  
  // Print an array
  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
  }
  
  // Driver code
  int main() {
    int arr[] = {1, 12, 9, 5, 6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    heapSort(arr, n);
  
    printf("Sorted array is \n");
    printArray(arr, n);
  }
