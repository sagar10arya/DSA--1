#include<bits/stdc++.h>
using namespace std;

void reverse(string &str, int i, int j){

    // Base Case
    if(i > j) return;

    swap(str[i], str[j]);
    i++;
    j--;

    return reverse(str, i , j);
}

int main()
{
    string name = "abcde";

    reverse(name, 0, name.length()-1);
    
    cout<<"Reverse name: "<< name<<endl;


    return 0;
}