#include<iostream>
using namespace std;


//single level inheritance
class Human{
    protected:
    string name;
    int age;

    public:
    Human(string name, int age){
        this->name = name;
        this->age = age;
    }
    void work(){
        cout<<"i am cooking something"<<endl;
    }
};



class Student: public Human{
    private:
    int rollNo;
    int fee;
    public:
    Student(string name, int age, int rollNo, int fee): Human(name,age){
        this->rollNo = rollNo;
        this->fee = fee;
    }

    void display(){
        cout<<"name: "<<this->name<<endl<<" age: "<<this->age<<endl<<" roll no: "<<this->rollNo<<endl<<" fee: "<<fee<<endl;
    }
};

//multilevel inheritance
class Person{
    protected:
    string name;
    int age;

    public:
    void introduce(){
        cout<<"name is: "<<name<<endl<<"age is: "<<age<<endl;
    }
};

class Employee: public Person{
    protected:
    int salary;

    public:
    void monthly_salary(){
        cout<<"my monthly salary is: "<<salary<<endl;
    }
};

class Manager: public Employee{
    protected:
    string dept;
    int total_emp;

    public:
    Manager(string name, int age, int salary, string dept, int total_emp){
        this->name = name;
        this->age = age;
        this->salary = salary;
        this->dept = dept;
        this->total_emp = total_emp;
    }

    void myDept(){
        cout<<" my department is: "<<dept<<endl;
    }

};

int main(){

    //Student s1("rahul",30,3434,3043);

    Manager M1("rahul",32,40000,"IT",50);
    M1.introduce();
    M1.monthly_salary();
    M1.myDept();
    
  


    return 0;
}