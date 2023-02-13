//Given an expression string x. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.
//For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).
#include <stack>

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        if(x.length()==1)
            return 0;
        stack<char> s;
        int i=0;
        while(x[i]!='\0')
        {
            if(s.empty())
                    s.push(x[i]);
            else if( (x[i]==')' && s.top()=='(')  || (x[i]=='}' && s.top()=='{') || (x[i]==']' && s.top()=='[') )
                s.pop();
            else s.push(x[i]);
            i++;
        }
        if(s.empty())
            return 1;
    return 0;
    }

};