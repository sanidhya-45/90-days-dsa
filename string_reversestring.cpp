#include <iostream>
#include <string>

string reverseWord(string str){
    
  //Your code here
  for(int i=0;i<str.length()/2;i++)
        {
            char a=str[i];
            str[i]=str[str.length()-1-i];
            str[str.length()-1-i]=a;
        }
    return str;
}
