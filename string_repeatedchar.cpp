class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        // for(int i=0; i<s.length(); i++)
        // {
        //     size_t r= s.substr(i+1, s.length()).find(s[i]);
        //     if(r!= string::npos)
        //         return s[i];
        // }
        // return '#';
        int arr[26]={0};
        vector<int> v;
        for(int i=0;i<s.length(); i++)
        {
            arr[s[i]-'a']++;
        }
        
        for(int i=0;i<s.length(); i++)
        {
            if(arr[s[i]-'a']>1)
            {
                char c=s[i];
                int found= s.find(c);
                v.push_back(found);
            }
        }
        if(v.empty())
         return '#';
        else{
            char ch=s[v[0]];
            return ch;
        }
        
    }
    
};