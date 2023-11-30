#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void bark(){
        cout<<"Barking"<<endl; 
    }
};

class Human{

    public:
    string color;

    void speak(){
        cout<<"Speaking"<<endl;
    }
    
};

// Multiple Inheritancex
class Hybrid: public Animal, public Human{

    
};


int main(){

    Hybrid h1;

    h1.bark();
    h1.speak();

    return 0;
}