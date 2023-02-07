//User function template for C++
//Given an unsorted array Arr of N positive and negative numbers. Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers.
//Note: Array should start with a positive number.
 
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int> v1, v2;
        for(int i = n-1 ; i>=0 ; i--)
        {
            if(arr[i] >= 0)
                v1.push_back(arr[i]);
            else
                v2.push_back(arr[i]);
        }
        int i = 0;
        while(i < n){
            if(!v1.empty())
            {
                arr[i++] = v1.back();
                v1.pop_back();
            }
            if(!v2.empty())
            {
                arr[i++] = v2.back();
                v2.pop_back();
            }
        }
	}
};