//User function Template for C++
#include <bits/stdc++.h>
// Given two sorted arrays array1 and array2 of size m and n respectively. Find the median of the two sorted arrays.

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        vector<int> v;
        int i=0, j=0;
    while(i< array1.size() && j< array2.size())
    {
        if(array1[i]<=array2[j])
            {v.push_back(array1[i]);
            i++;}
        else if(array1[i]> array2[j])
            {v.push_back(array2[j]);
            j++;}
    }
    while(i<array1.size())
    {
        v.push_back(array1[i]);
        i++;
    }
     while(j<array2.size())
    {
        v.push_back(array2[j]);
        j++;
    }   
    double mid;
    if(v.size()%2!=0)
        {mid=v.size()/2;
        return v[mid];}
    else
    {
        double mid= (double)(v[(v.size()/2) -1] + v[v.size()/2])/2;
        return mid;
    }
    
    
    }
};