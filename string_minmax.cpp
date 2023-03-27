#include <iostream>
using namespace std; 


void find(string s)
{
    string tempmax="", tempmin="", temp="";
    for(int i=0; i< s.length(); i++)
    {   
        
        if(s[i]==' ')
        {
            if(temp.length()> tempmax.length())
                tempmax= temp;
            temp="";
        }
        else temp+=s[i];
    }
    
    if(temp.length()> tempmax.length())
             tempmax= temp;
            
 tempmin=tempmax;
    for(int i=0; i< s.length(); i++)
    {   
        
        if(s[i]==' ')
        {
            if(temp.length()< tempmin.length())
                tempmin=temp;
            temp="";
        }
        else temp+=s[i];
    }
    if(temp.length()< tempmin.length())
            tempmin= temp;

    cout<<tempmax<<" "<<tempmin;
}

int main() 
{
    string s;
    getline(cin, s);
    find(s);

return 0;
}