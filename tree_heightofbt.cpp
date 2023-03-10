//User function template for C++

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
// another way (using only recursion)
 int height(struct Node* node){
        // code here 
        if(node==NULL) return 0;
        if (node->left==NULL && node->right==NULL)
            return 1;
        if(node->left==NULL && node->right!=NULL)
            return 1+ height(node->right);
        if(node->left!=NULL && node->right==NULL)
            return 1+ height(node->left);
        else 
            return 1 + max( height(node->left), height(node->right) );
 }
// another way
class Solution{
    public:
    int k=INT_MIN;
    int count=0;
    void traversal(struct Node * root)
    {
        if(root!=NULL)
        {
            count++;
            traversal(root->left);
            traversal(root->right);
            k=max (count,k );
            count--;
        }
    }
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node ==NULL)
            return 0;
        traversal(node);
            return k;
    }
};
