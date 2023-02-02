//Given an array a[ ] of N elements. 
//Consider array as a circular array i.e. element after an is a1. 
//The task is to find maximum sum of the absolute difference between
// consecutive elements with rearrangement of array elements allowed 
//i.e. after any rearrangement of array elements find |a1 – a2| + |a2 – a3| + …… + |an-1 – an| + |an – a1|.

#include <bits/stdc++.h>

long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
    long int sum=0;
    int count=0;
    for(int i=0,j=n-1;i<j;)
    {
        if(count%2==0)
            {sum =  sum + fabs(arr[i]- arr[j]);
            j--;}
        else{
            sum =  sum + fabs(arr[i]- arr[j]);
            i++;
        }
        count++;
      
    }
    if(n%2==0)
        sum =sum + fabs(arr[n-1] - arr[(n/2)-1]);
    else sum =sum + fabs(arr[n-1] - arr[(n/2)]);
    return sum;
}

