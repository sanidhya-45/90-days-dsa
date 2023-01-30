#include <iostream>
using namespace std; 
///         basic question
void fun(int n)
{
    if(n==0)
        return;
    else{
        cout<<"Hi"<<endl;
        fun(n-1);
    }
}
int main() 
{
    int n;
    cin>>n;
    fun(n);

return 0;
}