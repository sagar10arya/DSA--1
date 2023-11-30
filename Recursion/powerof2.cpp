#include<bits/stdc++.h>
using namespace std;

int power(int n){
    // Base Case
    if(n == 0) return 1;

    // recursive relation
    // int smallerProblem = power(n-1);
    // int biggerProblem = 2 * smallerProblem;
    // return biggerProblem;

    return 2* power(n-1);
}

int main(){

    int n;
    cin>>n;

    int ans = power(n);

    cout<< "Power of 2 raise to "<<n<< " is "<<ans<<endl;








    return 0;
}