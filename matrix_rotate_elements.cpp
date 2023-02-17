// User function Template for C++
//Given two integers M, N, and a 2D matrix Mat of dimensions MxN, 
//clockwise rotate the elements in it.
class Solution {
  public:
    vector<vector<int>> rotateMatrix(int M, int N, vector<vector<int>> Mat) {
        // code here
         int startRow = 0 ;

        int endRow = M-1 ;

        int startCol = 0 ;

        int endCol = N - 1;

        

        while(startRow<endRow && startCol < endCol){

           int prev=Mat[startRow+1][startCol];

           //first row

           for(int j=startCol;j<=endCol;j++) swap(prev,Mat[startRow][j]);

           startRow++;

           //last col

           for(int i=startRow;i<=endRow;i++) swap(prev,Mat[i][endCol]);

           endCol--;

           //last row

           for(int i=endCol;i>=startCol;i--) swap(prev,Mat[endRow][i]);

           endRow--;

           //first col;

           for(int i=endRow;i>=startRow;i--) swap(prev,Mat[i][startCol]);

           startCol++;

           

        }

        

        return Mat ;
        
    }
};