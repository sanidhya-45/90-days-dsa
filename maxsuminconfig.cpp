
// Given an array(0-based indexing), you have to find the max sum of i*A[i] where A[i] is the element at index i in the array. The only operation allowed is to rotate(clock-wise or counter clock-wise) the array any number of times.
/*You are required to complete this method*/
int max_sum(int A[],int N)
{
//Your code here
    int sum=0;
    int prod =0;
    
    for(int i=0; i<N; i++)
    {
        sum = sum + A[i];
        prod+=(A[i] * i);
    }
    int maxsum= prod;
    
    for(int i=0;i<N;i++)
    {
        prod= prod-(sum- A[i]) + A[i]*(N-1);
        maxsum=max(prod, maxsum);
    }
    return maxsum;
    
}