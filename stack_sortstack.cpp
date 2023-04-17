void SortedStack :: sort()
{
   //Your code here
   stack<int> st;
   
    // st.push(s.top());
   while(!s.empty())
   {
       if( st.empty()!=1 && st.top()>= s.top())
       {
           int k1= s.top();
           s.pop();
           bool flag=false;
           while(st.top() > k1)
           {
               int k= st.top();
               st.pop();
               s.push(k);
               if(st.empty())
               {
                   flag=true;
                   st.push(k1);
                   break;
               }
           }
           if(flag==false && st.top()<=k1)
           {
                st.push(k1);
           }
       }
       else{
           st.push(s.top());
           s.pop();
       }
   }
//   while(!s.empty())
//   {
//       st.push(s.top());
//       s.pop();
//   }
//   st.pop();
   s=st;