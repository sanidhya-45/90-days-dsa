#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
// sort a matrix
int main() 
{
    int N;
    vector<vector<int> > Mat;
    N=4;
    // int k=N-1;
    Mat={ {10, 20 ,30 ,40},
          {15 ,25 ,35 ,45},
          {27 ,29 ,37 ,48},
          {32 ,33 ,39 ,50}
        };

    vector<int> v;
    int k=0;

    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            v.push_back(Mat[i][j]);
    sort(v.begin(), v.end());
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            Mat[i][j]=v[k++];

    for(int i=0;i<N;i++)
        {for(int j=0;j<N;j++)
        {
            cout<<Mat[i][j]<<" ";
        }
        cout<<endl;}

    
    

return 0;
}