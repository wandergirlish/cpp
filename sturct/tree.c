#include<stdio.h>
typedef struct node{
    int data;
    struct node* left;
    struct node* right;
} Node;
void preorder(Node* node)
{
    if(node !=NULL)
    {
        printf("%d ",node -> data);
        preorder(node->left);
        preorder(node->right);
    }
}
int main()
{
    Node n1;
    Node n2;
    Node n3;
    Node n4;
    n1.data=5;
    n1.data=6;
    n1.data=7;
    n1.data=8;
     
     n1.left =&n2;
     n1.right =&n3;
     n2.left=&n4;
     n2.right=NULL;
     n3.left=NULL;
     n3.right=NULL;
     n4.left=NULL;
     preorder(&n1);
     return 0;
}