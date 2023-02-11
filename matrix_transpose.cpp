#include <bits/stdc++.h>
//    transpose of square matrix

class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        
        for(int i=0;i<n;i++)
        {
            for( int j =0;j<i;j++)
            {
                int temp= matrix[i][j];
                
                matrix[i][j]= matrix[j][i];
                
                matrix[j][i]= temp;
            }
        
        }
        
    }
};