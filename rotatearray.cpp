class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
        void reversearray(int a[], int start, int end)
        {
            int temp;
            while(start<end)
            {
                temp=a[start];
                a[start]= a[end];
                a[end]= temp;
                start++;
                end--;
            }
        }
    void rotateArr(int arr[], int d, int n){
        // code here
        if(d==n || d%n==0) return;
        else{
            reversearray(arr,0 , d%n -1);
            reversearray(arr,d%n, n-1);
            reversearray(arr,0 ,n-1);
            
        //     vector<int> v;
        //     if(d>n)
        //     {
        //         d=d%n;
        //     }
        //   for(int i=d;i<n;i++)
        //         v.push_back(arr[i]);
        //   for(int i=0;i<d;i++)
        //         v.push_back(arr[i]);
            
        //   for(int i=0;i<v.size();i++)
        //     {
        //         arr[i]= v[i];
        //     }
        }
    }
};