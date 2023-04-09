int sum(Node * node)
    {
        if( node==NULL ) return 0;
        if(node->left==NULL && node->right==NULL)
            {
                int k=node->data;
                node->data=0;
                return k;
            }
        int l=sum(node->left);
        int r=sum(node->right);
        int k= node->data;
        node->data=l+r;
        return node->data + k;
    }
    void toSumTree(Node *node)
    {
        // Your code here
        int left=sum(node->left);
        int right=sum(node->right);
        node->data=left+ right;
    }