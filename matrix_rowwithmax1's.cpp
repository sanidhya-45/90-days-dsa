//User function template for C++
#include <bits/stdc++.h>
//    return the index of row with max number of 1's
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int i=0, j=0;
	    int count=0, m1=0, index=-1;
	    
	    for(int i=0;i<n;i++)
	    {
	        count=0;
	        for(int j=0;j<m;j++)
	        {
	            if(arr[i][j]==1)
	                count++;
	        }
	        if(count>m1)
	            {index=i;
	            m1=count;}
	       else if(count==m1)
	       {
	           if(index<i)
	             continue;
	       }
	    }
	    return index;
	}

};