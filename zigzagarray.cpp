// User function template for C++
#include <bits/stdc++.h>
//Given an array arr of distinct elements of size N,
// the task is to rearrange the elements of the array 
//in a zig-zag fashion so that the converted array 
//should be in the below form: 

//arr[0] < arr[1]  > arr[2] < arr[3] > arr[4] < . . . . arr[n-2] < arr[n-1] > arr[n]. 


class Solution {
  public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n) {
        // code here
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && arr[i]>arr[i+1])
                {int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;}
            else if(i%2!=0 && arr[i]<arr[i+1])
                {int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;}
        }
    }
};