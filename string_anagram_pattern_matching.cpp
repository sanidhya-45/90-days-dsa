#include <bits/stdc++.h>
using namespace std; 
#define LETTER 26

//     anagram matching algorithm
void setArray(int *text_freq, int value, int initial)
{
    for(int i=0;i<value;i++)
    {
        text_freq[i]= initial;
    }
}
bool arrayCompare(int *text_freq, int * patt_freq, int value)
{
    for(int i=0;i<value; i++)
    {
        if(text_freq[i]!= patt_freq[i])
            return false;
    }
    return true;
}
void getindex(string text, string patt, int *loc, int *index)
{
    int patt_freq[LETTER];
    int text_freq[LETTER];

    int p=patt.length();
    int s=text.length();
    setArray(patt_freq, LETTER, 0);

    for(int i=0;i<p;i++)
        patt_freq[patt[i]-'A']++;
    
    for(int i=0;i <=s-p ;i++)
    {
        setArray(text_freq, LETTER, 0);
        int j;
        for( j=i;j<i+p;j++)
        {
            text_freq[text[j]-'A']++;
        }
        if(arrayCompare(text_freq, patt_freq, LETTER))
        {
            // *index++;
            loc [++*index] =i;
        }
    }

    for(int i=0; i<=*index; i++)
        cout<<loc[i]<<" ";

}
int main() 
{
    string s="SANIDHYASANAS";
    string patt="SAN";
    int loc[s.length()];
    int index=-1;
    getindex(s,patt,loc, &index);

return 0;
}