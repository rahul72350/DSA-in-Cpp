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

//multilevel inheritance

class Youtuber{
    protected:
    string content_type;
    string channel_name;
    int subscribers;
    
};

class Teacher{
    protected:
    string subject;
    int salary;
};

class Gamer{
    protected:
    string gameName;
};


class Rahul: protected Youtuber, Teacher, Gamer{
    string person_name;
    int age;

    public:
    Rahul(string contentName,string channelName,int subscribers, string subject, int salary,string gameName){
        this->content_type = contentName;
        this->channel_name = channelName;
        this->subscribers = subscribers;
        this->subject = subject;
        this->salary = salary;
        this->gameName = gameName;
    }

    void Display(){
        cout<<"content type: "<<content_type<<endl;
        cout<<"channel name: "<<channel_name<<endl;
        cout<<"subscribers: "<<subscribers<<endl;
        cout<<"subject is: "<<subject<<endl;
        cout<<"salary is: "<<salary<<endl;
        cout<<"game name is: "<<gameName<<endl;
    }
};


//heirarichal inheritance

class Man{
    protected:
    string name;
    int age;
};

class Students: public Man{
    string className;
    int fee;

    public:
    Students(string name, int age, string className, int fee){
        this->name = name;
        this->age = age;
        this->className = className;
        this->fee = fee;
    }

    void display(){
        cout<<"student name is: "<<this->name<<endl;
        cout<<"student age is: "<<this->age<<endl;
        cout<<"student class is: "<<this->className<<endl;
        cout<<"student annual fee is: "<<this->fee<<endl;
    }
};

class Teachers: public Man{
    string subject;
    int salary;

    public:
    Teachers(string name, int age, string subject, int salary){
        this->name = name;
        this->age = age;
        this->subject = subject;
        this->salary = salary;   
    }

    void display(){
        cout<<"teacher name is: "<<this->name<<endl;
        cout<<"teacher age is: "<<this->age<<endl;
        cout<<"teacher subject is: "<<this->subject<<endl;
        cout<<"teacher annual salary is: "<<this->salary<<endl;
    }
};

class Staffs: public Man{
    string dept;
    int salary;

    public:
    Staffs(string name, int age, string dept, int salary){
        this->name = name;
        this->age = age;
        this->dept = dept;
        this->salary = salary;
    }

    void display(){
        cout<<"staff name is: "<<this->name<<endl;
        cout<<"staff age is: "<<this->age<<endl;
        cout<<"staff department is: "<<this->dept<<endl;
        cout<<"staff salary is: "<<this->salary<<endl;
    }
};




int main(){

    //Student s1("rahul",30,3434,3043);

    // Manager M1("rahul",32,40000,"IT",50);
    // M1.introduce();
    // M1.monthly_salary();
    // M1.myDept();
    
    // Rahul r1("techfact","factamind",4000,"hindi",3000,"pubg");
    // r1.Display();

    Staffs s1("amisha",20,"sales",50000);
    s1.display();
    cout<<endl<<endl;
    Teachers t1("rahul",22,"Maths",40000);
    t1.display();

  


    return 0;
}