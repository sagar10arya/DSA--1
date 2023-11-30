#include <bits/stdc++.h>
using namespace std;

int getSum(int *arr, int n){
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    // char ch = 's';

    // cout<<sizeof(ch)<<endl;

    // int *ch2 = new int;

    int n;
    cin>>n;

    // variable size array
    int *arr = new int[n];

    // taking input in array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int sum = getSum(arr, n);

    cout << "Sum: "<< sum <<endl;


    return 0;
}