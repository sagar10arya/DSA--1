#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[10] = {21,74,68,456};

/*
    cout<<"Address of first memory block is "<< arr <<endl;
    cout<<"Address of first memory block is "<< &arr[0] <<endl;
    cout<<"4th "<< *arr <<endl;
    cout<<"5th "<< *arr + 1 <<endl;
    cout<<"6th "<< *(arr + 1) <<endl;

    // arr[i] = *(arr+i) or i[arr] = *(i+arr)
    int i = 3;
    cout<< i[arr] << endl;
*/

/*
    int temp[10];
    cout<<"Size of temp "<< sizeof(temp)<<endl;

    int *ptr = &temp[0];
    cout<<"Size of ptr "<< sizeof(ptr)<<endl;
*/

/* 
   int a[20] = {1,2,3,4};

    cout<<"Address of array-> "<< &a[0] <<endl;

    int *p = &a[0];
    cout<<"Address of ptrrray-> "<< &p<<endl;
*/


    int arr[10];

//ERROR
    // arr = arr + 1;

    int *ptr = &arr[0];
    cout<<ptr<<endl;
    ptr = ptr + 1;
    cout<<ptr<<endl;







    return 0;
}