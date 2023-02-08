#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//      first negative number in window size of K



vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                     
    vector<long long> v;
    queue<int> q;
    
    int i=0,j=0;
    while(j<N)
    {
        if(A[j]<0)
            q.push(A[j]);
        if(j-i+1<K)
            j++;
        else if(j-i+1==K)
        {
            if(q.empty()==1)
                {
                v.push_back(0);
                }
            else
                {
                v.push_back(q.front());
                if(A[i]<0)
                    q.pop();
                }
            i++;
            j++;
        }
    }
    return v;
    
 }

    //   brute force approach 
//     for(int i=0;i<n-k+1;i++)
//     {
//         flag=0;
//         if(a[i]<0)
//             {v.push_back(a[i]);
//             continue;
//             }
//         for(int j=1;j<k;j++)
//         {
//             if(a[i+j]<0)
//               {  v.push_back(a[i+j]);
//                 flag=1;
//                 break;
//               }
            
//         }
//         if(flag==0)
//             v.push_back(0);
//     }