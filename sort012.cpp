class Solution
{
    public:
    
    void sort012(int a[], int n)
    {
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(i==0 && a[i]==0)
            {
                k=i+1;
                continue;
            }
            else if(a[i]==0)
            {
                    int temp=a[i];
                    a[i]=a[k];
                    a[k]=temp;
                    k=k+1;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                 int temp=a[i];
                    a[i]=a[k];
                    a[k]=temp;
                    k=k+1;
            }
        }
        
        // O(N)
        // vector<int> v;
        // for(int i=0;i<n;i++)
        // {
        //     if(a[i]==0)
        //         v.push_back(a[i]);
        // }
        // for(int i=0;i<n;i++)
        // {
        //     if(a[i]==1)
        //         v.push_back(a[i]);
        // }
        // for(int i=0;i<n;i++)
        // {
        //     if(a[i]==2)
        //         v.push_back(a[i]);
        // }
        // for(int i=0;i<n;i++)
        // {
        //     a[i]=v[i];
        // }
    }
    
};