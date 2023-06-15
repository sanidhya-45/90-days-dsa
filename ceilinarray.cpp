#include <bits/stdc++.h>
using namespace std;

vector<int> find(int a[], int n)
{
    vector<int> v;
    int m1=INT_MAX;
    for(int i= n-1; i>-1; i--)
    {
        m1=INT_MAX;
        for(int j=0; j<i; j++)
        {
            if(a[j]- a[i]>=0)
            {
                m1= min(m1, a[j]);
            }
        }
        if(m1==INT_MAX)
            v.push_back(-1);
        else v.push_back(m1);
    }
    return v;
}
int main()
{
   int a[]={2,8,30,15,25,12};
   vector<int> v;
   v= find(a, 6);
   reverse(v.begin(), v.end());
   for(auto it: v)
    cout<<it<<" ";
  return 0;
}
