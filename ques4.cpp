#include <iostream>
using namespace std; 

//         printing palindrome 

void fun1(int n)
{
    if(n==0)
        return;
    fun1(n-1);
    cout<<n<<" ";
}

void fun2(int n)
{
    if(n==0)
        return ;
    cout<<n<<" ";
    fun2(n-1);

}
void print(int n)
{
    fun1(n-1);
    cout<<n<<" ";
    fun2(n-1);
}

int main() 
{
    int n;
    cin>>n;
    print(n);

return 0;
}