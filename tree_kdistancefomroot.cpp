

/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// function should print the nodes at k distance from root
vector<int> v;
int n=0;
void distance(struct Node * root, int k)
{
    // assert(k!=0);
    if(root!=NULL)
    {
        if(k>0)
        {
            distance(root->left, k-1);
            distance(root->right, k-1);
        }
        if(k==0)
        {
            v.push_back(root->data);
            return;
        }
    }
        
}
vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
    v.clear();
    if( k==0 ) 
    {
        v.push_back(root->data);
        return v;
    }
    distance(root, k);
    return v;
}