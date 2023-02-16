#include <bits/stdc++.h>
//Given a boolean matrix of size RxC where each cell contains either 0 
//or 1, modify it such that if a matrix cell matrix[i][j] is 1 then all 
//the cells in its ith row and jth column will become 1.

class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    // O[N^4]
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        multimap<int, int> mm;
        for(int i=0; i< matrix.size(); i++)
        {
            for(int j=0;j < matrix[i].size(); j++)
            {
                if(matrix[i][j] == 1)
                {
                    mm.insert(pair<int, int>(i,j));
                }
            }
        }
        int k;
        for(auto it=mm.begin(); it!=mm.end() ;it++)
        {
            k=it->first;
            for(int j=0;j<matrix[k].size();j++)
                matrix[k][j]=1;
        }
        int v;
        
        for(auto it=mm.begin(); it!=mm.end();it++)
        {
            v=it->second;
            for(int i=0;i<matrix.size();i++)
                matrix[i][v]=1;
        }
    }
};