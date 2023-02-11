//User function Template for Java

/*Class Geeks with its member function interchange()
* a[][] = matrix input
* r : number of rows
* c : number of columns
*/
import java.util.*;

class Geeks{
    
    static void interchange(int a[][],int r, int c){
        
        // Your code here
        for(int i=0 ; i < r ;i++)
        {
            int temp = a[i][0];
            a[i][0]= a[i][c-1];
            a[i][c-1]= temp;
            
        }
        
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                System.out.print(a[i][j] + " ");
            }
            System.out.println();
        } 
    }
}