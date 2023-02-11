#include <bits/stdc++.h>
//  Given a square matrix of size N*N, print the sum of upper and lower triangular elements. Upper Triangle consists of elements 
//on the diagonal and above it. The lower triangle consists of elements on the diagonal and below it.
class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        int sum1=0, sum2=0;
        vector <int>v;
        for(int i=0;i< n; i++)
        {
            for(int j=0;j <=i;j ++)
                sum1= sum1 + matrix[i][j];
        }
        
        for(int i=0;i< n; i++)
        {
            for(int j=n-1;j >=i;j --)
                sum2 = sum2 + matrix[i][j];
        }
        v.push_back(sum2);
        v.push_back(sum1);
        return v;
    }
};