#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
// Given a N x N matrix, where every row and column is sorted in non-decreasing order. 
//Find the kth smallest element in the matrix.
#define MAX 1000

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  vector<int> v;
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        v.push_back(mat[i][j]);
        
   sort(v.begin(), v.end());
   return v[k-1];
}