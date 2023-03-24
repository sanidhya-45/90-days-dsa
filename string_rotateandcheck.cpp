#include <bits/stdc++.h>


class Solution {
public:
    bool rotateString2(string s1, string s2) {
        // using two pointers
        if(s1.length()!= s2.length() ) return false;

        int i=0, j=0, k=0, n=s1.length();
        bool flag= false;
        while(i< 2*n)
        {
            if(k==n) return 1;
            if(s1[i % n]== s2[j %n]) // % for avoid end of string
            {
                i++;
                j++;
                k++;
            }
            else if(flag)
            {
                flag=false;
                i++;
            }
            else{
                flag=true;
                j=0;
                k=0;
            }


        }
        return 0;

    }

    bool rotateString(string s1, string s2) {
// method 1 using queues
     if(s1.length()!= s2.length() ) return false;

     queue<int> q1, q2;
    int len= s1.length();
     for(int i=0; i<len; i++)
        q1.push(s1[i]);
    
     for(int i=0; i<len; i++)
        q2.push(s2[i]);
    
     int k=len;
     while(k)
     {
         if(q1==q2) return true;
         else{
             char ch= q1.front();
             q1.pop();
             q1.push(ch);
             k--;
            }
     }
     return false;
    // int len=s1.length();
    // int i=0, j=0, pos=-1;

    // while(i<len )
    // {
    //     if(s1[i]==s2[j])
    //         {
    //         if(i==len-1)
    //         {pos=i;
    //         break;}
    //         else if(  )
    //         {pos=i;
    //         break;}
    //         }
    //     i++;
    // }
    // // cout<<i<<" "<<j<<endl;
    // if(pos==-1) return false;

    // int diff= pos;
    // bool flag=false;

    // while(j<len)
    // {
    //     cout<<i<<" "<<j<<endl;
    //     if(s1[i]==s2[j])
    //    {
    //         if(i==len-1)
    //             {i=0;
    //             }
    //         else{
    //             i++;
    //         } 
    //         j++;   
    //         flag=true;
    //    }
    //    else 
    //    {
    //     flag= false;
    //     break;
    //    }
    // }
    // return flag;
    }
};