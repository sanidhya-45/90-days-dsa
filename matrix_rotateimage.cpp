#include <bits/stdc++.h>

//You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
//You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<=i;j++)
            {
                int temp= matrix[i][j];
                matrix[i][j]= matrix[j][i];
                matrix[j][i]= temp;
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size()/2 ;j++)
            {
                int temp= matrix[i][j];
                matrix[i][j]= matrix[i][matrix[i].size()-1-j];
                matrix[i][matrix[i].size()-1-j]= temp;
            }
        }
        
    }
};