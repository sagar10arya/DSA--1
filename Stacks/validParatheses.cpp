#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0; i<s.length(); i++){
            char ch = s[i];

            // If opening bracket, stack push
            // If closing bracket, stack top check and pop

            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else
            {
                // for closing brackets
                if( !st.empty() ){
                    char top = st.top();

                    if( (ch == ')' && top == '(') || (ch == '}' && top == '{') || 
                        (ch == ']' && top == '['))
                            st.pop();
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }

        if(st.empty())
            return true;
        else 
            return false;
    }
};