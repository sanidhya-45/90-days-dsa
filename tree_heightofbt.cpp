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