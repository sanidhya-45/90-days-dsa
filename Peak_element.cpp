class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       // binary search O(log N)
       int l=0, h=n-1;
       while(l<=h)
       {
           int mid= (l+h)/2;
           if((mid ==0 || arr[mid]>=arr[mid-1]) && (mid==n-1|| arr[mid]>=arr[mid+1]))
            return mid;
           else if(mid> 0 && arr[mid]<=arr[mid-1])
            h=mid-1;
           else l= mid+1;
       }
       return -1;
    // brute force O(N)
    //   if(n==1) return 0;
       
    //   for( int i=0; i<n; i++)
    //   {
    //       if(i==0)
    //       {
    //           if(arr[i]>=arr[i+1])
    //             return i;
    //       }
    //       else if(i==n-1)
    //       {
    //           if(arr[i]>=arr[i-1])
    //             return i;
    //       }
    //       else if(arr[i] >=arr[i-1] && arr[i] >= arr[i+1])
    //         return i;
    //   }
    //   return -1;
       
    }
};
