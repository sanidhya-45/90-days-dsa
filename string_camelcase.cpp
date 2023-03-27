#include <iostream>
using namespace std; 

void camel(string s)
{
    string temp="";
    for (int i = 0; i < s.length();)
    {
        if(s[i]==' ')
        {
            if(s[i+1]!=' ')
            {
                temp+=toupper(s[i+1]);
                i=i+2;
            }
        }
        else temp+=s[i++];
    }
    cout<<temp;
    
}
int main() 
{
    string s;
    getline(cin, s);
    camel(s);

return 0;
}