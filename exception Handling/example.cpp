#include<iostream>
#include<exception>
using namespace std;

int main(){


    try{
    int *p = new int[1000000];
    cout<<"memory allocation is successfull";
    delete []p;
    }
    catch(const exception &e){
        cout<<"exception occured "<<e.what()<<endl;
    }
    catch(...){
        cout<<"exception occured";
    }
    

    return 0;
}