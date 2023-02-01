// #include <bits/stdc++.h>
//User function Template for C++

void rotate(int arr[], int n)
{
    int k=0;
    k=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=k;
}