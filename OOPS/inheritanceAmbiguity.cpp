#include<bits/stdc++.h>
using namespace std;

// Hierarchial Inheritance
class A{
    public:
    void func1(){
        cout<<"Inside Func 1"<<endl;
    }
};

class B{
    public:
    void func1(){
        cout<<"Inside Func 2"<<endl;
    }
  
};

class C: public A, public B{

};


int main(){

   C obj;

//    obj.func1(); // ambiguos func in both classes
// To resolve this amibuiguity we use scope resolution operator(::)

    obj.A::func1();
    obj.B::func1();
    
    return 0;
}