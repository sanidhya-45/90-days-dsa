#include<bits/stdc++.h>

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        
        int flag=0,k=0;
        sort(array.begin(), array.end());
        if(array[0]!=1)
            return 1;
        for(int i=1;i<n-1;i++)
        {
            if(array[i]-array[i-1]==1)
                {continue;
                flag=0;}
            else
                {k= array[i]-1;
                flag=1;}
        }
        if(flag==0)
            k=n;
    return k;         
}
    
};