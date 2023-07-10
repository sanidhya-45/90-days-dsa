class Solution {
  public:
    vector<int> increment(vector<int> arr ,int n) {
        // code here
        reverse(arr.begin(), arr.end());
        int c=0;
        int i=0;
        bool flag= true;
        for(i=0; i<n; i++)
        {
            if(arr[i] +1 >9 && i==0)
            {
               arr[i]=0;
                c=1;
            }
            else if(arr[i]+ c> 9)
                {
                arr[i]=0;
                c=1;
                }
            else{
                arr[i]++;
                flag=false;
                break;
            }
        }
        if(flag)
        {
            arr.push_back(1);
        }
        reverse(arr.begin(), arr.end());
        return arr;
    }
};
