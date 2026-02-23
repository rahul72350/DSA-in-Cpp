

#include<iostream>
using namespace std;

/*an exceptoin is an unexpected problem that arises during the execution
of a program our program terminates suddenly with some
errors/issues exception occurs during the running of the program
*/

/*
the try keyword represents a block of code that may throw an
exception placed inside the try block. it's followed by one 
or more catch blocks. if an exception occurs, try block 
throws that exception.
*/

/*
the catch statement represents a block of code that is executed 
when a particular exception is thrown from the try block.
the code to handle the exception is written inside the catch block.
*/

/*
an exception in c++ can be thrown using the throw keyword.
when a program encounters a throw staement, then it immediately
terminates the current function and starts finding a matching 
catch block to handle the throw exception
*/

class Customer{
    string customerName;
    int balance;
    int accountNo;

    public:
    
    Customer(string Cn, int bl, int ac){
        this->customerName = customerName;
        this->balance = bl;
        this->accountNo = ac;
    }

    //deposit

    void deposit(int amount){
        if(amount <= 0){
           throw "invalid amount";
        }

        this->balance += amount;
        cout<<amount<<" is credited successfull"<<endl;
       
    }

    //withdrawal

    void withdrawal(int amount){


        if(amount < 0){
            throw "invalid amount";
        }

        if(amount > this->balance){
            throw "inefficient balance";
        }
        
        this->balance -= amount;
        cout<<amount<<" debited successfull"<<endl;
        
    }

    //check current balance

    void check(){
        cout<<"current balance is: "<<this->balance<<endl;
    }

};



int main(){

    Customer c1("rahul",5000,240200);

    try{
    c1.deposit(0);
    c1.withdrawal(30);
    }
    catch(const char* c){
       cout<<"excpetion occured: "<<c<<endl;
    }

    c1.check();


}