#include<bits/stdc++.h>
using namespace std;

/* 
Problem Statement:
Given a  mathematical expression in the form of string. You are suppose
to return true if the given expression contains a pair of redundant
brackets, else return false. The given string only contains '(',')',
'+', '-','*','\' and lowercase english letters.
Note: A pair ofbracket is said to be redundant when a subexpression
is surrounded by a needless/useless bracket.

for ex-> ((a+b)) has a pair of redundant brackets whereas (a + (b*c))
does not have.
*/
 
bool findRedundantBrackets(string &s)
{
    stack<char> st;
    for(int i =0; i<s.length(); i++){
        char ch = s[i];

        if( ch == '(' || ch == '+'  || ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }
        else{
            // ch ya toh ')' ye hai yaa lowercase letter
            if(ch == ')'){
                bool isRedundant = true;
                while(st.top() != '('){
                    
                    char top = st.top();
                    if(top == '+'  || top == '-' || top == '*' || top == '/')
                    {
                            isRedundant = false;
                    }
                    st.pop();
                }

                if(isRedundant == true) return true;
                st.pop();
            }
        }
    }
    return false;
}
