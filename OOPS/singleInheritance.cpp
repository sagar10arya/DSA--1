#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void speak(){
        cout<<"Speaking"<<endl; 
    }
};

class Dog : public Animal{

    
};


int main(){

    Dog d;

    cout<<d.age<<endl;
    d.speak();

    return 0;
}