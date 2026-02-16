#include<iostream>
using namespace std;

//inheritance: the capability of a class to derive the property and chracterstics from another class.


class Human{
    string religion,color;
    protected:
    string name;
    int age,weight;
};


class Student:protected Human{
    private:
    int roll_no;
    int fee;
    public:

    Student(string name,int age, int weight,int roll_no,int fee){
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_no = roll_no;
        this->fee = fee;
    }

    void StudentData(){
        cout<<"------------------------Student's details--------------------------------------------------"<<endl;
        cout<<"Student name is: "<<this->name<<endl;
        cout<<"Student age is: "<<this->age<<endl;
        cout<<"Student weight is: "<<this->weight<<endl;
        cout<<"Student roll no is: "<<this->roll_no<<endl;
        cout<<"Student fee is: "<<this->fee<<endl;
       
    }
};

class Teacher: protected Human{
    private:
    int salary;
    public:

    Teacher(string name, int age, int weight, int saary){
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->salary = salary;
    }

        void teacherData(){
        cout<<"--------------------Teacher's Details------------------------------------------------------"<<endl;
        cout<<"Teacher name is: "<<this->name<<endl;
        cout<<"Teacher age is: "<<this->age<<endl;
        cout<<"Teacher weight is: "<<this->weight<<endl;
        cout<<"Teahcer salary is: "<<this->salary<<endl;
    }
};

int main(){

    Student s1("rahul",20,55,23342,700000);
    s1.StudentData();
    Teacher T1("amisha",40,55,430000);
    T1.teacherData();


    return 0;
}