#include<bits/stdc++.h>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z') return ch;
    else{
        int temp = ch - 'A' + 'a';
        return temp;
    }
}

char toUpperCase(char ch){
    if(ch <= 'a' && ch >= 'z') return ch;
    else{
        int temp = ch - 'a' + 'A';
        return temp;
    }
}

bool checkPalindrome(char name[], int n){
    int s = 0;
    int e = n-1;

    while(s <= e){
        if(toLowerCase(name[s]) != toLowerCase(name[e] )) return false;
        else{
            s++;
            e--;
        }
    }
    return true;
}

void reverseString(char name[], int length){
    int s = 0;
    int e = length - 1;
    while (s<e)
    {
       swap(name[s++], name[e--]);
    }
    
}

int getLength(char name[]){
    int count=0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}


int main(){


    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Your name is "<<name<<endl;
    int len = getLength(name);
    cout<<"Length: "<<len <<endl;
    cout<<"Reverse string is :";
    reverseString(name,len);
    cout<<name<<endl;

    cout<<"Is the string palindrome: "<< checkPalindrome(name,len)<<endl;

    cout<<"Character is "<<toUpperCase('a')<<endl;
    cout<<"Character is "<<toLowerCase('C')<<endl;






    return 0;
}