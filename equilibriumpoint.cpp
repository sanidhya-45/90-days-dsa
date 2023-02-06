#include <iostream>
//   equilibrium point

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int sumleft=a[0], sumright=a[n-1];
        int i=0, j=n-1;
        while(i<j)
        {
            if(sumleft<sumright)
                {i++;
                sumleft=sumleft+ a[i];
                }
            else if( sumleft>sumright)
            {
                j--;
                sumright = sumright +a[j];
            }
            else{
                i++;
                j--;
                 sumleft=sumleft+ a[i];
                 sumright = sumright +a[j];
            }
        }
        if(sumleft==sumright && i==j)
            return i+1;
        return -1;
    }

};