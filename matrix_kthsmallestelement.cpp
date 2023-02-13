#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#define MAX 1000
// Given a N x N matrix, where every row and column is sorted in non-decreasing order. 
//Find the kth smallest element in the matrix.
// using basic approach

int smallerThanMid(int row[],int mid,int n){
    int l=0;
    int h=n-1;
    while(l<=h){
        int md=(l+h)/2;
        if(row[md]<=mid)l=md+1;
        else h=md-1;
    }
    return l;

}
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
//   using binary search
   int low= mat[0][0];
   int high= mat[n-1][n-1];
   
   while(low<=high)
   {
      int mid=(high+low)/2;
      int count=0;
      for(int i=0;i<n;i++)
      {
          count+=smallerThanMid(mat[i],mid,n);
      }
      if(count<k)low=mid+1;
      else high=mid-1;
   }
  
  return low;
}



// basic approach

// int kthSmallest(int mat[MAX][MAX], int n, int k)
// {
//   //Your code here
//   vector<int> v;
//   for(int i=0;i<n;i++)
//     for(int j=0;j<n;j++)
//         v.push_back(mat[i][j]);
        
//    sort(v.begin(), v.end());
//    return v[k-1];
// }
