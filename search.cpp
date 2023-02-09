#include <bits/stdc++.h>
//   find index of the key element in the given sorted and rotated array

 class Solution{
    public:
    int find(int A[], int low, int high)
    {
        int mid=(high- low)/2 +low;
        while(low<high)
        {
            if(A[mid]>=A[0])
                low=mid+1;
            else high=mid;
            mid=(high- low)/2 +low;
        }
        return low;
    }
    int bs(int A[], int low, int high, int key)
    {
        int mid=(low+high)/2;
        while(low<=high)
        {
            if(A[mid]==key)
                return mid;
            else if(A[mid] < key)
                low=mid+1;
            else high= mid-1;
            
            mid=low+ (high - low)/2;
        }
        
        return -1;
    }
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        int min = find(A, l ,h);
        if(key>= A[min] && key<=A[h])
           return  bs(A, min, h, key);
        else
            return bs(A,l, min-1, key );
    }
};