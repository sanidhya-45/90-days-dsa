void sibling(Node *node, vector<int> &v)
{
    if(node==NULL|| (node->left==NULL && node->right==NULL )) return;
    if(node->left==NULL){
        v.push_back(node->right->data);
    }
    if(node->right==NULL)
    {
        v.push_back(node->left->data);
    }
    sibling(node->left, v);
    sibling(node->right, v);
}


vector<int> noSibling(Node* node)
{
    // code here
    vector<int> v;
    sibling(node, v);
    if(v.size()==0) v.push_back(-1);
    sort(v.begin(), v.end());
    return v;
}