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
        sort(arr, arr+n);
        map<int, int> mp;
        
        for(int i=0;i<n;i++)
        {
            if(mp.find(arr[i])!=mp.end())
                mp[arr[i]]+=1;
            else mp[arr[i]]=1;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            int val= k-arr[i];
            count+=mp[val];
            if(val== arr[i])
                count--;
        }
        return count/2;
    }
};