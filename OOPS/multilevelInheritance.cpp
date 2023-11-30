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

class PitBull : public Dog{

    
};


int main(){

    PitBull p;

    cout<<p.age<<endl;
    p.speak();

    return 0;
}