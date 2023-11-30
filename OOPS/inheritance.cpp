#include<bits/stdc++.h>
using namespace std;

class Human{
    private:
        
    public:
        int weight;
        int age;
        int height;
    
        int32_t getHeight(){
            return this->height;
        }
        int32_t getWeight(){
            return this->weight;
        }
        int32_t getAge(){
            return this->weight;
        }

        void setWeight(int w){
            this->weight = w;
        }
};

class Male : public Human{

    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
};


int main(){

    Male m1;

    cout<<m1.getAge()<<endl;
    cout<<m1.getWeight()<<endl;
    m1.setWeight(76);
    cout<<m1.getWeight()<<endl;
    m1.sleep();


    return 0;
}