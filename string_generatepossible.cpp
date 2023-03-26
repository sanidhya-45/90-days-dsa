class Solution
{
	public:
	    set<string> s1;
	    void generate(string s, int index)
	    {
	        if(index==s.length()) 
	           { s1.insert(s);
	            return;
	            }
	        if(s[index]=='?')
	        {
	            s[index]='1';
	            generate(s,index+1);
	            s[index]='0';
	            generate(s, index+1);
	        }
	        else generate(s, index+1);
	            
	   //    bool flag=true;
	   //    int len=s.length();
		  // for(int i=0; i<len;i++)
		  // {
		  //     if(s[i]=='?')
		  //     {
		  //         flag=false;
		  //         s[i]='0';
		  //         generate(s);
		  //         s[i]='1';
		  //         generate(s);
		           
		  //     }
		  // }
		  // if(flag==true) s1.insert(s);
		   
	    }
		vector<string> generate_binary_string(string s)
		{
		    // Code here
		   generate(s,0);
		  // for(auto it: s1)
		  //  cout<<it<<" ";
		   vector<string> v(s1.begin(), s1.end());
		   return v;
		}
};