#include <bits/stdc++.h>
using namespace std; 

void mirror(string s, int n)
{
    if(n> s.length())
    {
        cout<<"not possible";
        return;
    }
    else{
        map<char, char> mp;
        for(int i=97, j=122; i<110; i++, j--)
        {
            mp[char(i)]=char(j);
        }
        for(int i=122, j=97; i>=110; i--, j++)
        {
            mp[char(i)]=char(j);
        }
        for(auto it:mp)
            cout<<it.first<<" "<<it.second<<endl;

        for(int i=n-1;i<s.length();i++)
        {
            s[i]=mp[s[i]];
        }
        cout<<s;
    }
}
int main() 
{
    string s;
    getline(cin, s);
    int n;
    cin>>n;
    mirror(s,n);

return 0;
}