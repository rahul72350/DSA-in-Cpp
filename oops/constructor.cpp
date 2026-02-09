#include<iostream>
using namespace std;


//constructor
//it is a special function that is invoked automatically at the time of object creation
//name of the constuctor should be same as class name
//it doesn't have any return type
//it is used to intialize the value
//when we don't write it explicitly it added by compiler implicitly

class Customer{

    private:
    string customerName;
    long long accountNo;
    int balance;

    public:

    //explicit default constructor 
    Customer(){
        customerName = "";
        accountNo = 0;
        balance = 0;
        cout<<"objects created successfully"<<endl;
    }

    //parameterized constructor

    Customer(string customername, long long accountno, int bal){
        customerName = customername;
        accountNo = accountno;
        balance = bal;
    }

    //when we create more than one constructor with different paremeters this concept is known as constructor overloading
    //when we create constructor then we compiler will not create any constructor.

    //inline constructor
    inline Customer(string cname,long long accountno)
    :customerName(cname),accountNo(accountno),balance(1000){}


    //copy constructor
    Customer(const Customer& obj){
        customerName = obj.customerName;
        accountNo = obj.accountNo;
        balance = obj.balance;
    }

        void userInfo(){
        cout<<"customer name is: "<<customerName<<endl;
        cout<<"customer ac No: "<<accountNo<<endl;
        cout<<"customer current balance is: "<<balance<<endl;
        }


    //destructor: it is a last function that is automatically invoked before an object destroyed
    //it is basically used to remove dynamic memory not an object.
    //basically it release dynamic resources.
    ~Customer(){
        cout<<"destructor called"<<endl;
    }

};




int main(){
    
  
    Customer c1 = Customer();
    
   
    Customer c2("John Doe", 1234567890, 5000);
    c2.userInfo();
    
   
    Customer c3("Jane Smith", 9876543210);
    c3.userInfo();
    
  
    Customer c4(c2);
    c4.userInfo();

    return 0;
}
    
