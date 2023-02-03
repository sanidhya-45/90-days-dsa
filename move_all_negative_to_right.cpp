#include <iostream>
#include <vector>
using namespace std; 
//    moving all negative numbers to right side(order does not matter)
//    time: O(N) 


//    below approach space: O(N)
void print(int a[], int n)
{
    vector<int> v1;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
            v1.push_back(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
            v1.push_back(a[i]);
    }
    for(int i=0;i<v1.size();i++)
        a[i]=v1[i];

    // printing elements
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

// two pointer approach 
// space: O(1)
void print1(int a[], int n)
{
    for(int i=0,j=n-1;i<j;)
    {
        if(a[i]>=0 && a[j]>=0)
        {
            j--;
        }
        else if(a[i]<0 && a[j]<0)
            i++;
        else if(a[i]>=0 && a[j]<0)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
        else{
            i++;j--;
        }
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

}
int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    print1(a,n);    

return 0;
}