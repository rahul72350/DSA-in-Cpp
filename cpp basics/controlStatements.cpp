#include<iostream>   //input and output streams are defined here within the iostream header file.
using namespace std;  //this line add std:: in prefix of iostream and other header file methods also like std::cout<<"hello world";

// i am already familiar with variables, pseudo code, flowchart, data types, computer memory unit concept that's why i am start from control statement
//here we will understand control sturcture concept in cpp like condition statements and loops

int main(){

    //how to take user input and display output

    // int a = 5;  //this is hardcoded

    //declare variables
    int a;
    int b;
    cout<<"enter value of a: "<<endl;    //endl keyword is used for enter and "\n" work same 
    cin>>a;                                 //cin>>a means take input form user
    cout<<"enter value of b: "<<endl;    //cout<< this is also known as insertion operator
    cin>>b;                                 //cin>> this is also known extraction operator.
    cout<<"sum of given input is: "<<a+b<<endl;                        //print sum of a and b input value.

    //typecasting hands on
    int c = 99;
    char d = c;                             //here value of c variable considered as ascii value 
    cout<<"value of c variable converted into correspondence character: "<<d<<endl;

    //if else conditional statements

    if(a>b){                                                //if this condition true then this block will execute otherwise else block will execute
        cout<<"value of a is greater than b"<<endl;
    }
    else{                                                  // meaning of block is code with curly braces {..code} this is called block
        cout<<"value of b is greater than a"<<endl;
    }

    //let's create mark grading system

    int marks;
    cout<<"enter totla marks: ";
    cin>>marks;

    if(marks >= 33){
        cout<<"congratulation you are passed!"<<endl;
    }
    else{
        cout<<"you failed in exam but not in life, work hard with smartness! "<<endl;
    }
    
    //lets write a code that determine whether a number is odd or even.

    if(a % 2 == 0){
        cout<<"a is even number"<<endl;
    }
    else{
        cout<<"a is odd number"<<endl;
    }

    //determine whether a char is vowel or not

    if(d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u'){
        cout<<c<<" is a vowel!"<<endl;
    }
    else{
        cout<<c<<" is not a vowel"<<endl;
    }
   

    //let's dive into loops concept

    //print your name 10 times

    for(int i = 0; i < 10; i++){
        cout<<"rahul"<<" ";
    }
    cout<<endl;

    //print sum of n numbers using loop not a formula

    int n;
    cout<<"enter input: ";
    cin>>n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }

    cout<<"sum of "<<n<<" natural numbers is: "<<sum<<endl;




    return 0;
}