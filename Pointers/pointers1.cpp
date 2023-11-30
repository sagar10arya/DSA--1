#include <bits/stdc++.h>
using namespace std;



int main()
{

    int num = 5;

    cout << num << endl;
    // address of operator -> &
    cout<< "Address of num " << &num << endl;

    int *ptr = &num;

    cout<<"Address is: "<< ptr << endl;
    cout<<"Value is: "<< *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout<<"Address of double is: "<< p2 << endl;
    cout<<"Value of double: "<< *p2 << endl;

    cout<<"Size of integer is "<< sizeof(num)<<endl;

    // sizev of every pointer will be same
    cout<<"Size of int pointer is "<< sizeof(ptr)<<endl;
    cout<<"Size of double pointer is "<< sizeof(p2)<<endl;













    return 0;
}