#include <bits/stdc++.h>
using namespace std;
// traversals in tree
struct node
{
    int data;
    node *left;
    node *right;
};
node * newnode(int x)
{
    node * temp= new node;
    temp->data=x;
    temp->left=temp->right=NULL;
    return temp;
}
void inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
void preorder(node * root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node * root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

int main()
{
    struct node *root= newnode(1);
    root->left=newnode(2);
    root->right= newnode(3);
    root->left->left=newnode(4);
    root->left->right= newnode(5);
    root->right->left= newnode(6);
    root->right->right= newnode(7);
    inorder(root); cout<<endl;
    preorder(root); cout<<endl;
    postorder(root); cout<<endl;

    return 0;
}

