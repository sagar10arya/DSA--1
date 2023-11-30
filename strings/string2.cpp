#include<bits/stdc++.h>
using namespace std;

// maximium occuring characters in a string

char getMaxOccuringChar(string s){
    int arr[26] = {0};

    // create an array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        // taking into account that string is already in a lowercase order
        number = ch - 'a';
        arr[number]++;
    }



    // if string is not in lowercase uncomment 18-26 and remove 15-16 otherwise run only 15
    /*    //lowercase
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }
        else{
            //uppercase
            number = ch - 'A';
        }
        arr[number]++;
    }  */


    // find maximum occurring character   
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a'+ ans;
    return finalAns;
}



int main(){


    string s;
    cout<<"Enter the string : ";
    cin>>s;
    cout<<"Most occuring character: "<<getMaxOccuringChar(s);





    return 0;
}