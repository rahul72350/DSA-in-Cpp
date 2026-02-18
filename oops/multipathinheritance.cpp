#include<iostream>

using namespace std;

class Human{
    protected: 
    string name;
    int age;

};

class Youtuber: public virtual Human{
    protected:
    string channel_name;
    int subscriber;
};

class Engineer: public virtual Human{
    protected:
    string specialization;
    int salary;
};

class Rahul: public Youtuber, Engineer{
    protected:
    string address;
    string car;

    public:

    Rahul(string name, int age, string channelName, int subs, string specialization, int salary, string addr, string car){
        this->name = name;
        this->age = age;
        this->channel_name = channelName;
        this->subscriber = subscriber;
        this->specialization = specialization;
        this->salary = salary;
        this->address = address;
        this->car = car;
    }

    void display(){
        cout<<"name is "<<this->name<<endl;
        cout<<"age is: "<<this->age<<endl;
        cout<<"channel name is: "<<this->channel_name<<endl;
        cout<<"subscriber is: "<<this->subscriber<<endl;
        cout<<"specialization is: "<<this->specialization<<endl;
        cout<<"salary: "<<this->salary<<endl;
        cout<<"address: "<<this->address<<endl;
        cout<<"car is: "<<this->car<<endl;
    }
};


int main(){


    Rahul r1("rahul",30,"factamind",3000,"CSE",3000,"chandigarh","land cruiser");
    r1.display();


    return 0;
}