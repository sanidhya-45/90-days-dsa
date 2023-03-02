class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            int i=0, j=0;
            vector<int> v1;
            set<int> s1, s2;
            while(i<n1 && j<n2)
            {
                if(A[i]== B[j])
                {
                    s1.insert(A[i]);
                    i++;
                    j++;
                }
                else if(A[i] <  B[j])
                    i++;
                else j++;
            }
            
           for(int k=0;k<n3;k++)
           {
               s2.insert(C[k]);
           }
           for(auto it: s1)
           {
               if(s2.find(it)!=s2.end())
                v1.push_back(it);
           }
           if(v1.size()==0) v1.push_back(-1);
         return v1;
        }

};