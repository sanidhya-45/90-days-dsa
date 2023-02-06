// User function template for C++
#include <bits/stdc++.h>
//Given two arrays a[] and b[] respectively of size n and m, 
//the task is to print the count of elements in the intersection (or common elements) of the two arrays.

// for this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays. 

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        // vector<int> v;
        sort(a,a+n);
        sort(b,b+m);
        int count=0;
        
        // if(a[0]==b[0])
        //     count++;
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(a[i]==a[i-1] && b[j]==b[j-1])
                {
                    i++;j++;
                }
            else  if(a[i]==b[j] )
            {
                count++;
                i++;
                j++;
            }
            else if(a[i]<b[j])
            {
                i++;
            }
            else if(a[i]>b[j])
            {
                j++;
            }
        }
        return count;
    }
};