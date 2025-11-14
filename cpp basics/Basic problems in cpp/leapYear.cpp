#include<iostream>
using namespace std;


//here we have to write a code that determine whether input year is leap year or not.

int main(){


    int year;
    cout<<"enter year: ";
    cin>>year;

    if(year % 400 == 0){
        cout<<year<<" is a leap year!"<<endl;
    }
    else if(year % 4 == 0 && year % 100 != 0){
        cout<<year<<" is a leap year!"<<endl;
    }
    else{
        cout<<year<<" is not a leap year!"<<endl;
    }

    return 0;
}