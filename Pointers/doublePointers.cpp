#include <bits/stdc++.h>
using namespace std;

void update( int **ptr2){
    // ptr2 = ptr2 + 1;
    // Kuch Change hoga -- NO


    // *ptr2 = *ptr2 + 1;
    // Kuch Change hoga -- > YES


    **ptr2 = **ptr2 + 1;
    // Kuch Change hoga --> YES
}

int main()
{

    int  i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

/*
    cout<<"Address of ptr : "<< ptr <<endl;
    cout<<"Value of ptr2 : " << *ptr2 <<endl;
    cout<<"Address of ptr2 "<< ptr2 <<endl;

    cout<< "Folowing are ways to access value of i :" <<endl;
    cout<< i << endl;
    cout << *ptr << endl;
    cout << **ptr2 << endl;
    cout<<"---------------------"<<endl;

    cout<<"Following are the ways to access address of ptr: "<<endl;
    cout<< &i << endl;
    cout << ptr << endl;
    cout << *ptr2 << endl;
    cout<<"---------------------"<<endl;

    cout<<"Following are the ways to access address of ptr2: "<<endl;
    cout<< ptr2 << endl;
    cout<< &ptr << endl;
    cout<<"---------------------"<<endl;
*/

    cout<<"Before: "<<endl;

    cout<<i<<endl;
    cout<<ptr<<endl;
    cout<<ptr2<<endl;
    update(ptr2);
    cout<<"After: "<<endl;
    cout<<i<<endl;
    cout<<ptr<<endl;
    cout<<ptr2<<endl;
    







    return 0;
}