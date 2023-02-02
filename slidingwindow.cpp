#include <iostream>
using namespace std; 
//    max sum of sub array of size 3

int subarray(int a[], int n, int k)
{
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum=sum +a[i];
    }
    int sum2=sum;
    for(int i=k;i<n;i++)
    {
        sum2=sum+a[i]-a[i-k];
        if(sum2>sum)
            sum=sum2;
    }
    return sum2;
}
int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int sum=subarray(a,n,3);
    cout<<sum;

return 0;
}