class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	   // map<int, int> m1, m2;
	    
	   // for(int i=0; i<n; i++)
	   // {
	   //     m1[a[i]*a[i]] ++;
	   //     m2[a[i]*a[i]] ++;
	   // }
	    
	    // method 2
	   // vector<int> v;
	   // for(int i=0; i<n-1;i++)
	   // {
	   //     for(int j=i+1; j<n; j++)
	   //     {
	   //         v.push_back(a[i]*a[i] + a[j]*a[j]);
	   //     }
	   // }
	   // vector<int>::iterator it;
	   // for(int i=0; i<n;i++)
	   // {
	   //     a[i]= a[i]* a[i];
	   // }
	    
	   // for(int i=0; i<n; i++)
	   // {
	   //     it= find(v.begin(), v.end(), a[i]);
	   //     if(it!=v.end())
	   //         return true;
	   // }
	   // for(auto it: m1)
	   //     cout<<it.first<<" "<<it.second<<endl;
	   // for(auto it1:m1)
	   // {
	   //     for(auto it2: m2)
	   //     {
	   //         if(m2.find( it1.first + it2.first )!= m2.end())
	   //             return true;
	   //     }
	   // }
	   map<int, int>m;

        for(int i=0;i<n;i++){

            m[arr[i]*arr[i]]++ ;

            }

            for(int j=0;j<n;j++){

            for(int k=0;k<n;k++){

            if(m.find(arr[k]*arr[k]+arr[j]*arr[j])!=m.end()){

                     return true;

                 }

             }

            }

     return false;

	}
};