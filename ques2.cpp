 #include <iostream>
 using namespace std; 
 
/// printing n to 1 using  and 1 to n using recursion

void printn_to_1(int n)
{
    if(n==0)
        return;
    else {
        cout<<n<<" ";
        printn_to_1(n-1);
    }
}
void print1_to_n(int n)
{
    if(n==0)
        return;
    else{
        print1_to_n(n-1);
        cout<<n<<" ";
    }
}
 int main() {
    int n;
    cin>>n;
    printn_to_1(n);
    cout<<endl;
    print1_to_n(n);
 return 0;
 }