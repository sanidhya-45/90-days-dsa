#include <bits/stdc++.h>
#include <vector>
// Given an array A of positive integers. Your task is to find the leaders in the array. 
//An element of array is leader if it is greater than or equal to all the elements to its right side.
// The rightmost element is always a leader. 

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> v;
        for(int i=0;i<n;i++)
            v.push_back(a[i]);
          int k=a[n-2];  
        for(int i=n-2;i>-1;i--)
        {
            if(v[i]>=v[i+1] && v[i]>=k)
                {
                    k=v[i];
                    continue;
                }
            else{
                v.erase( v.begin() + i );
            }
        }
        return v;
    }
};