/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution{
  public:
    /*You are required to complete this method*/
    int count=0;
    int minDepth(Node *root) {
        // Your code here
        if(root==NULL) return 0;
        if (root->left==NULL && root->right==NULL)
            return 1;
        if(root->left==NULL && root->right!=NULL)
            return 1+ minDepth(root->right);
        if(root->left!=NULL && root->right==NULL)
            return 1+ minDepth(root->left);
        else 
            return 1 + min( minDepth(root->left), minDepth(root->right) );
    }
};