class Solution{
public:	
    void heapify(int arr[], int n, int i)
    {
        int largest=i;
        int left= 2*i+1;
        int right= 2*i+2;
        if(left<n && arr[left]< arr[largest]) largest =left;
        if(right<n && arr[right]< arr[largest]) largest =right;
        if(largest!=i)
        {
            swap(arr[i], arr[largest]);
            heapify(arr, n, largest);
        }
        
    }
    void buildmaxheap(int arr[], int n)
    {
        for(int i=(n-2)/2; i>=0; i--)
            heapify(arr,n,i);
    }
    int extractmax(int arr[], int n)
    {
        if(n==0) return INT_MAX;
        if(n==1) {
            n--;
            return arr[0];
        }
        swap(arr[0], arr[n-1]);
        n--;
        heapify(arr,n,0);
        return arr[n];
        
    }
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    buildmaxheap(arr, n);
	    for(int i=n-1; i>=1; i--)
	    {
	        swap(arr[0], arr[i]);
	        heapify(arr,i,0);
	    }
	    
	   // for(int i=0; i<n; i++)
	   // { cout<<arr[i]<<" ";}
	   // cout<<endl;
	    
	    vector<int> v;
	    for(int i=0;k!=0 ;i++)
	    {
	        v.push_back(arr[i]);
	        k--;
	    }
	    
	    return v;
	}

};
