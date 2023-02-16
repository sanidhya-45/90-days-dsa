//Given a N x N matrix M. Write a program to find count of all the distinct elements common to all rows of the matrix. Print count of such elements.
// User function Template for C++

class Solution{
public:
    int distinct(vector<vector<int>> M, int N)
    {
        // code here
        unordered_map<int, int> s;
        for(int j=0;j<N;j++)
                s[M[0][j]]=1;
        
        for(int i=1;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(s[M[i][j]]==i)
                {
                    s[M[i][j]]= i+1;
                }
            }
        }
        // for(auto it= s.begin(); it!=s.end(); it++)
        // {
        //     cout<<it->first<<" "<<it->second<<endl;
        // }
        int count=0;
        for(auto it= s.begin(); it!=s.end(); it++)
        {
            if(it->second == N)
                count++; 
        }
      return count;
    }
};