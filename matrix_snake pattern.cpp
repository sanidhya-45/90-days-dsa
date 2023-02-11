#include <vector>
// print the matrix in snake pattern...
// traverse first row from start then second row from end and third row from start again and so on

class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        vector<int> v;
        
        for(int i=0;i<matrix.size();i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<matrix[i].size(); j++)
                    v.push_back(matrix[i][j]);
            }
            else{
                for(int j=matrix[i].size()-1;j>=0;j--)
                    v.push_back(matrix[i][j]);
            }
        }
        return v;
    }
};