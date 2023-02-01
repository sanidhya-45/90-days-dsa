//You are given an array of size N. Rearrange the given array in-place such that all the negative numbers occur before positive numbers.(Maintain the order of all -ve and +ve numbers as given in the original array).



void Rearrange(int arr[], int n)
{
    // Your code goes here
    int countn=0,countp=0;
    vector<int> neg;
    vector<int> pos;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
            neg.push_back(arr[i]);
        else pos.push_back(arr[i]);
    }
    
    for(int i=0;i<neg.size();i++)
        arr[i]=neg[i];
        
    for(int i=neg.size(),j=0;i<n;i++,j++)
        arr[i]=pos[j];
            
}