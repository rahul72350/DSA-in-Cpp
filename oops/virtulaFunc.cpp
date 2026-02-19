#include<iostream>
using namespace std;

//virtual function

class Animal{
    public:
    virtual void speak(){
        cout<<"ha ha ha"<<endl;
    }
};

class Dog: public Animal{
    public:
    void speak(){
        cout<<"bark"<<endl;
    }
};


int main(){


    Animal *p = new Dog();

    p->speak();







    return 0;
}