#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string &str, int i, int j){

   /* while(i<j){
        if(str[i] == str[j]) {
            i++;
            j--;
        }
        else return 0;
    }

    return 1;
    */
                // BY Recursion

    // Base Case
    if(i>j) return true;

    if(str[i] != str[j]) return false;
    else{
        return checkPalindrome(str, i+1, j-1);;
    }

    
}

int main()
{
    string name = "namn";

    bool ans = checkPalindrome(name,0, name.length()-1);

    if(ans){
        cout<<"Its a palindrome"<<endl;
    }
    else{
        cout<<"Its not a palindrome"<<endl;

    }


    return 0;
}