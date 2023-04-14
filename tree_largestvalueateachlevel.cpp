class Solution
{
    public:
    vector<int> largestValues(Node* root)
    {
        //code here4
        queue<Node *> q;
        vector<int> ans;
        q.push(root);
        while(!q.empty())
        {
            int m=INT_MIN;
            int n= q.size();
            for(int i=0; i<n;i++)
            {
                Node* temp=q.front();
                q.pop();
                m=max(m, temp->data);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                
            }
            ans.push_back(m);
        }
        return ans;
    }
};