#include<iostream>
using namespace std;


//compile time polymorphism

class Calculate{

    public:

    float area(int r){
        return 3.14*r*r;
    }

    float area(int l, int b){
        return l*b;
    }
};


//operator overloading

class Complex{
    int real,img;

    public:

    Complex(){

    }

    Complex(int real, int img){
        this->real = real;
        this->img = img;
    }

    void display(){
        cout<<real<<" + i"<<img<<endl;
    }

    Complex operator +(Complex &c){
        Complex ans;
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }
};


int main(){

    // Calculate c1;
    // cout<<"circle area is: "<<c1.area(2)<<endl;
    // cout<<"reactangle area is: "<<c1.area(4,5)<<endl;

    Complex c1(3,4);
    Complex c2(4,7);
    Complex c3 = c1+c2;
    
    c1.display();
    c2.display();
    c3.display();



    return 0;
}