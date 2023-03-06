class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        // brute force way
        
        // vector<long long> v;
        // int flag=0;
        // for(int i=0;i<n-1;i++)
        // {
        //     flag=0;
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(arr[j]>arr[i])
        //         {
        //             v.push_back(arr[j]);
        //             flag=1;
        //             break;
        //         }
        //     }
        //     if(flag==0)
        //         v.push_back(-1);
            
        // }
        // v.push_back(-1);
        // return v;
        
        // time limit exceeded
        // vector<long long > ans;
        // int i=0, k=0;
        
        // while(k<n)
        // {
        //     if(i==n-1 && k==n-1 )
        //         break;
        //     if(arr[i]> arr[k])
        //     {
        //         ans.push_back(arr[i]);
        //         k++;
        //         i=k;
                
        //     }
        //     else{
        //         i++;
        //         if(i==n && k<n)
        //             {
        //                 ans.push_back(-1);
        //                 k++;
        //                 i=k;
                        
        //             }
        //     }
        // }
        // ans.push_back(-1);
        // return ans;


        // Your code here

        vector<long long> vec;

        

        stack<long long> st;

        

        st.push(arr[n-1]);

        

        vec.push_back(-1);

        

        long long nextLargest = 0;

        

        for(int i = n-2; i >= 0; i--){

            

            while(!st.empty() and arr[i] >= st.top()){

                st.pop();

            }

            

            nextLargest = (st.empty()) ? -1 : st.top();

            

            vec.push_back(nextLargest);

            

            st.push(arr[i]);

        }

        

        reverse(vec.begin(), vec.end());

        return vec;

    
    }
};