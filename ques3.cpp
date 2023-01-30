#include <iostream>
using namespace std; 
///      printing numbers in palindrom fashion
void palindrome(int n)
{
    if(n==0)
        return;
    palindrome(n-1);
    cout<<n<<" ";
    palindrome(n-1);
}
int main() 
{
    int n;
    cin>>n;
    palindrome(n);

return 0;
}