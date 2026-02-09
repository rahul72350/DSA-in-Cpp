
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

int main(){

    Customer user1("rahul",434923448582,5000);
    Customer user2("rohit",343243234332,3230);
    Customer user3("roshan",39204820392,2000);
    Customer user4("prince",20455502324,1400);

    Customer::show();



    return 0;
}