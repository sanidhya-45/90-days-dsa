//User function template for C++
//    return the median in row wise sorted matrix
#include <bits/stdc++.h>

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here       
       vector<int> v;
       for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            v.push_back(matrix[i][j]);
        sort(v.begin(), v.end());
        
        int n=R*C;
        if(n%2!=0)
            return v[n/2];
        
        return (v[n/2]+ v[(n-1)/2])/2;
        
        
    }
};