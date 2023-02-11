#include <bits/stdc++.h>
//Given a matrix of size n x m, where every row and column is sorted in increasing order, 
//and a number x. Find whether element x is present in the matrix or not.

class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        int i=0, j=0;
        while(i < n &&  j < m)
        {
            if(matrix[i][j]== x)
                return 1;
            else if(matrix[i][j] > x)
            {
                i++;
                j=0;
            }
            else if(matrix[i][j] !=x && i<n && j==m-1)
            {
                i++;
                j=0;
            }
            else{
                j++;
            }
        }
        
    return 0;
    }
};