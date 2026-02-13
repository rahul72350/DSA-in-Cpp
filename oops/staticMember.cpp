
#include<iostream>
using namespace std;

//what is static data member
//they are attribute of classes or class member
//it is declared using static keyword
//only one copy of that member is created for the entire class and is shared by all the object.
//it is initialized before any object of this class is created.


class Customer{
    private:
    string name;
    long long ac_no;
    int balance;
    static int totalCount;
   
    public:
    
    Customer(string name, long long ac_no,int balance){
        this->name = name;
        this->ac_no = ac_no;
        this->balance = balance;
        totalCount++;
    }

    void showDetails(){
        cout<<"customer name is: "<<this->name<<endl;
        cout<<"customer AC No is: "<<this->ac_no<<endl;
        cout<<"customer current balance is: "<<this->balance<<endl;
    }

    void totalCustomer(){
        cout<<"total customer is: "<<this->totalCount<<endl;
    }

    static void show(){
        cout<<"total customer is: "<<totalCount;
    }

};

int Customer::totalCount= 0;

//encapsulation: wrapping up of data and information in a single unit, while controlling access to them
//with the help of encapsulation we hide our data from user so that user can not intenionally or accidently put the invalid data we used function for getting data and in function we apply validations.

class Student {
    string name;
    int rollNo;
    int age;
    public:
    Student(string a, int b){
        name = a;
        rollNo = b;
        age = 18;
    }

    void setAge(int c){
        if(c >=15 && c <= 50){
            age = c;
        }
        else{
            cout<<"invalid age!"<<endl;
            return;
        }   
    }

    void showDetails(){
        cout<<"student name is: "<<name<<endl;
        cout<<"student roll no is: "<<rollNo<<endl;
        cout<<"student age is: "<<age<<endl;
    }
};

//abstraction: displaying only essentail information and hiding the details.
//example: int sq = pow(2,2) here you will get result not details of implementations of pow function.


int main(){

    // Customer user1("rahul",434923448582,5000);
    // Customer user2("rohit",343243234332,3230);
    // Customer user3("roshan",39204820392,2000);
    // Customer user4("prince",20455502324,1400);

    // Customer::show();


    Student s1("rahul",32323);
    s1.setAge(100);
    s1.showDetails();


    return 0;
}