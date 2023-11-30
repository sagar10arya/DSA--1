#include<bits/stdc++.h>
using namespace std;

class A{

    public:
    int a;
    int b;
/*Compile Time Polymorphism*/
    // Function Overloading
    int add(int a, int b){
        return a + b;
    }

    int add(int a, int b,int c,int d){
        return a + b + c + d;
    }

    // Operator Overloading
    void operator+(A &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"Output "<< value2-value1<<endl;

        // cout<<"Hello SA10"<<endl;
    }
    void operator() (){
        cout<<"I am the bracket "<< this->a<<endl;
    }
};

/*Run-time Polymorphism*/

class Animal{
    public:

    void speak()
{
    cout<<"Speaking"<<endl;
}

};

class Dog: public Animal{
    public:
    void speak(){
        cout<<"I am barking"<<endl;
    }
};

int main(){

    Dog obj;
    obj.speak();


    // A obj1,obj2;
    // cout<<obj.add(10,20)<<endl;
    // cout<<obj.add(10,20,30,40)<<endl;
/*
    obj1.a = 5;
    obj2.a = 7;

    obj1 + obj2;

    obj1();
*/
    return 0;
}