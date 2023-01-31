
#include <bits/stdc++.h>

//User function template for C++
// gfg question

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        if(A.size()==B.size())
        {
            sort(A.begin(), A.end());
            sort(B.begin(), B.end());

            stack<int> s1,s2;
            for(int i=0;i<A.size();i++)
                {
                    s1.push(A[i]);
                    s2.push(B[i]);
                }
            while(s1.empty()!=1 && s2.empty()!=1)
            {
                if(s1.top()==s2.top())
                    {
                        s1.pop();
                        s2.pop();
                        continue;
                    }
                else if(s1.top()!=s2.top())
                    return false;
                
            }
        }
        return true;
    }
};