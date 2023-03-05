//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        // brute force
        
        // int count=0;
        // for(int i=0; i<n-1;i++)
        // {
        //     for(int j=i+1; j<n;j++)
        //     {
        //         if(arr[i] + arr[j]==k)
        //             count++;
        //     }
        // }
        // return count;
        // sort(arr, arr+n);
        // map<int, int> mp;
        
        // for(int i=0;i<n;i++)
        // {
        //     if(mp.find(arr[i])!=mp.end())
        //         mp[arr[i]]+=1;
        //     else mp[arr[i]]=1;
        // }
        // int count=0;
        // for(int i=0;i<n;i++)
        // {
        //     int val= k-arr[i];
        //     count+=mp[val];
        //     if(val== arr[i])
        //         count--;
        // }
        // return count/2;
        // two pointer approach below
        int i=0, j=n-1, ans=0;
        sort(arr, arr +n);
        while(i<j)
        {
            if(arr[i] + arr[j] < k)
                i++;
            else if(arr[i] + arr[j] >k)
                j--;
            else{
                
                int x=arr[i], xx=i;
                while(i<j && arr[i] ==x)
                i++;
                
                int y=arr[j], yy=j;
                while(j>=i && arr[j] ==y)
                j--;
                
                if(x==y)
                    {int temp= i-xx + yy-j -1;
                    ans= ans + (temp*(temp+1))/2;}
                else{
                    ans= ans+ (i-xx) * (yy-j);
                }
            }
        }
        return ans;
    }
};
