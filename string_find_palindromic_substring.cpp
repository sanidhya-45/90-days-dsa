class Solution {
public:
    int countSubstrings(string s) {
        string total="";

        for(int i=0; i< s.length(); i++)
        {
            string sub="";
            for(int j=i;j<s.length(); j++)
            {
                sub+=s[j];
                {
                    string k= sub;
                    reverse(sub.begin(), sub.end());
                    if(k==sub)
                        total+= sub+",";
                    sub=k;
                }

            }
        }
        // cout<<total;

        string sub="";
        int count=0;
        // for(int i=0; i<total.length(); i++)
        // {
        //     if(total[i]== ',')
        //     {
        //         string k = sub;
        //          reverse(sub.begin(), sub.end());
        //         if(k== sub)
        //             count++;
        //         sub="";
        //     }

        //     else sub+=total[i];
        // }
        
        for(int i=0;i< total.length(); i++)
        {
            if(total[i]== ',')
                count++;
        }
        return count;
    }
};