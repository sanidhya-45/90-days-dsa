bool isAnagram(string a, string b){
        
        
        // Your code here
        
        // using sorting
        if(a.length()!=b.length()) return false;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(a==b) return true;
        return false;
        
        // using hashmaps
        map<char, int> m1, m2;
        int i=0;
        while(a[i]!='\0')
        {
            
            if(m1.find(a[i])==m1.end())
                m1[a[i]]=1;
            else
                m1[a[i]]+=1;
            i++;
        }
        i=0;
        while(b[i]!='\0')
        {
            if(m2.find(b[i])==m2.end())
                m2[b[i]]=1;
            else
                m2[b[i]]+=1;
            i++;
         
        }
        bool flag=false;
        // for(auto it1= m1, auto it2= m2, it1 != m1.end() || it2 != m2.end(); )
        for( auto it1 = m1.begin(), it2=m2.begin(); it1 != m1.end(); it1++,it2++)
        {
            if(it1->first == it2->first && it1->second == it2->second)
            flag=true;
            else{
                flag= false;
                break;
            }
        }
        
        return flag;
    
    }