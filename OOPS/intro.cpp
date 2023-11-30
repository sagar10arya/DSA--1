#include<bits/stdc++.h>
using namespace std;


class Hero{
    private:
    int health;

    public:
    char *name;
    char level;

    static int timeToComplete;

    Hero(){
        cout<<"Default Constructor Called "<<endl;
        name = new char;
    }

    // Parameterised Constructor
    Hero(int health){
        // this keyword stores the address of current object4
        // cout<<"this-> "<< this <<endl;
        this->health = health;
    }

    Hero(int health, char level){
        this->level = level;
        this->health = health;
    }

    // Copy Constructor
    Hero(Hero& temp){

        char *ch = new char [strlen(temp.name) + 1];
        strcpy(ch,temp.name);
        this->name= ch;
        cout<<"Copy Contructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<"Name:"<<name<<" , ";
        cout<<"Health "<<health<<" , ";
        cout<<"level "<<level<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    char setName(char name[]){
        strcpy(this->name,name);
    }

    static int random(){
        return timeToComplete;
    }

    // Destructor
    ~Hero(){
        cout<<"Destructor has been called"<<endl;
    }

};

int Hero::timeToComplete = 5;

int main(){
    
     cout<<Hero::timeToComplete<<endl;
     cout<<Hero::random()<<endl;



/*
    Hero a;

    // Dynamic
    Hero *b = new Hero;
    // manually destructor called for dynamic allocation
    delete b;
*/

/*
    Hero hero1;
    hero1.setHealth(70);
    hero1.setLevel('A');
    char name[7] = "sagar";
    hero1.setName(name);

    // hero1.print();


    // Use default Copy contructor

    Hero hero2(hero1);
    // hero2.print();

    hero1.name[0] = 'V';
    hero1.print();

    hero2.print();

    hero1 = hero2;

    hero1.print();
    hero2.print();
*/

/*
    Hero S(80, 'D');
    S.print();

    // Copy Contructor
    Hero V(S);
    V.print();
*/

/*
    // object created statically
    Hero suresh(10);
    // cout<<"Address of Suresh "<<&suresh<<endl;
    suresh.print();


    // Object Created Dynamically
    Hero *obj = new Hero(18);
    obj->print();

    Hero temp(23,'C');
    temp.print();
*/

/*
    // Static Allocation
    Hero a;
    a.setHealth(90);
    a.setLevel('B');
    cout<<"Ramesh Health is "<<a.getHealth()<<endl;
    cout<<"Ramesh Level is "<<a.getLevel()<<endl;

    // Dynamic Allocation
    Hero *h1  = new Hero;
    h1->setHealth(100);
    h1->setLevel('A');
    cout<<"Ramesh Health is "<<h1->getHealth()<<endl;
    cout<<"Ramesh Level is "<<h1->getLevel()<<endl;

    // Or we Can acces like following too
    // cout<<"Ramesh Health is "<<(*h1).getHealth()<<endl;
    // cout<<"Ramesh Level is "<<(*h1).getLevel()<<endl;
*/
/*
    // Creation of Object
    Hero ramesh;  // static Allocation
    // In Case of Empty Class -- 1 byte memory is allocated
    // cout<<"Size of "<<sizeof(ramesh)<<endl;

    cout<<"Ramesh Health is "<<ramesh.getHealth()<<endl;
    cout<<"Ramesh Level is "<<ramesh.getLevel()<<endl;
    // ramesh.health = 70;

    // use setters
    ramesh.setHealth(100);
    ramesh.setLevel('B');

    ramesh.level = 'A';
    cout<<"Health is "<<ramesh.getHealth()<<endl;
    cout<<"Level is "<<ramesh.level<<endl;
*/

    return 0;
}