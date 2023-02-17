#include <bits/stdc++.h>

// Given a matrix of size r*c. Traverse the matrix in spiral form.
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here
        vector<int> v;
        int top=0, right=c-1, bottom= r-1, left=0;
        while(left <= right && top <= bottom)
        {
            for(int j=left; j<=right;j++)
                v.push_back(matrix[top][j]);
            top++;
            
            for(int i=top; i<=bottom; i++)
                v.push_back(matrix[i][right]);
            right--;
            
            if(top> bottom)
                break;
            
            if(left > right)
                break;
            for(int j=right; j>=left; j--)
                v.push_back(matrix[bottom][j]);
            bottom--;
            
            for(int i=bottom; i>=top; i--)
                v.push_back(matrix[i][left]);
            left++;
       
        }
    return v;
        
    }
};