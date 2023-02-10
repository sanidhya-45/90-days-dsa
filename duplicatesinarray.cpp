#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <unordered_map>
//    find duplicates in the array and return the vector containing the elements which appear more than once in an ordered manner

using namespace std; 
int main() 
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];
    
    vector<int> v;
    unordered_map<int, int> mp;

    for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        for(auto it: mp)
            {
                cout<<it.first<<" "<<it.second<<endl;
            }
        
         for(auto it: mp)
            {
                if(it.second > 1)
                    v.push_back(it.first);
            }
        sort( v.begin(), v.end());

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";

return 0;
}

