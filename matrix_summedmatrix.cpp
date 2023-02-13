#include <iostream>
//A matrix is constructed of size n*n. such that Mi,j= i+j. Count the number of cells having value q.
//Note: Assume, the array is in 1-based indexing.

class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // code here
        if(q<=1)
            return 0;
        if(q > (n+n))
            return 0;
        long int diagonal_elements=n;
        long int ans=0;
        if( q>n  && q<=(n+n))
            {
                long int diff= q-(n+1);
                return diagonal_elements-diff;
            }
        else if(q<n)
            {
                long int diff= (n+1)-q;
                return diagonal_elements-diff;
            }
        else
            return n-1;
    }
};