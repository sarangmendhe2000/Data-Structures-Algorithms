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
