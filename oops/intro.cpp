#include<iostream>
using namespace std;

//what is class
//class is user defined data type or blueprint for creating objects.

//what is object
//it is an entity that has state and behaviour or anything that exist in physical world.

//we used setter and getter method because we can apply validations that's why we keep all the attributes in private section

//alignment of attributes becomes important in terms of memory
//today i know the concept of padding
//home work is why empty class size is 1
//rule: os read data in class in chunk of largest data type.


class Student{

    string name;
    int age;
    int rollNo;
    char grade;

    public:

    void setname(string name){
        if(name.size() == 0){
            cout<<"invalid value"<<endl;
            return;
        }
        this->name = name;
    }

    void setage(int age){
        this->age = age;
    }

    void setrollNo(int no){
        this->rollNo = no;
    }

    void setgrade(char grade){
        this->grade = grade;
    }

    string getname(){
        return this->name;
    }

    int getage(){
        return this->age;
    }

    int getrollNo(){
        return this->rollNo;
    }

    char getgrade(){
        return this->grade;
    }

    void printDetails(){
        cout<<"student name is: "<<this->name<<endl;
        cout<<"student age is: "<<this->age<<endl;
        cout<<"student rollNo is: "<<this->rollNo<<endl;
        cout<<"student grade is: "<<this->grade<<endl;
    }

};


class A{
    int x;
    char y;
};




int main(){

    Student obj1 = Student();

    obj1.setname("rahul");
    obj1.setage(10);
    obj1.setgrade('A');
    obj1.setrollNo(2324555); 
    //obj1.printDetails();

    A obj = A();
    cout<<sizeof(A)<<endl;
    cout<<sizeof(obj)<<endl;








    return 0;
}