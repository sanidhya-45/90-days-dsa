#include <iostream>
#include <map>
#include <vector>
//         Common elements in all rows of a given matrix
using namespace std; 
void print(int mat[][5])
{
    map<int, int> mp;

    for(int j=0;j< 5 ;j++)
    {
        mp[(mat[0][j])]=1;
    }

    for(int i=1;i<4;i++)
    {
        for(int j=0;j< 5;j++)
        {
            if(mp.find(mat[i][j])!=mp.end())
                mp[mat[i][j]]= i + 1;
        }
    }

    vector<int> v;
    for(auto it: mp)
    {
        if(it.second == 4)
            v.push_back(it.first);
    }
    if(v.size()==0)
        v.push_back(-1);
    
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";

}

int main() 
{
    int mat[4][5] = {{1,8,2,2,2},
             {3, 7, 8, 2, 1},
             {8, 2, 2, 3, 0},
             {8, 2, 0, 7, 9},
            };
    print(mat);  



return 0;
}