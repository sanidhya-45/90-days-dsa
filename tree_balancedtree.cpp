class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    // int count=0;
    bool flag=1;
    int check(Node * root)
    {
        if(root==NULL) return 0;
        int left= check(root->left);
        int right= check(root->right);
        if(fabs(left-right)>1) flag=0;
        return max(left, right) +1;
        
        
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(root==NULL) return true;
        check(root);
        return flag;
        
    }
};