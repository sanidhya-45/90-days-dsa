class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       int count[26]={0};
       for(int i=0; i<S.length(); i++)
       {
           count[S[i]-'a']++;
       }
       int index=INT_MAX;
       for(int i=0;i<26;i++)
       {
           if(count[i]==1)
           {
               char ch=(char)(i+'a');
               size_t r=S.find(ch);
               if(r<index)
                index=r;
           }
       }
       if(index!=INT_MAX)
        return S[index];
       return '$';
    }

};
class Solution1
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       int n=S.length();
       for(int i=0;i<S.length(); i++)
       {
           size_t r=S.substr(i+1, n).find(S[i]);
        //   cout<<r<<endl;
           if(r==string ::npos)
                {
                    size_t b=S.substr(0,i).find(S[i]);
                    if(b==string::npos)
                        return S[i];
                }
       }
       return '$';
    }

};