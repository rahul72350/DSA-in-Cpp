#include<iostream>
using namespace std;

//pointer variable is used to store the address of variable.

int main(){

    int a = 10;

    //how to store of variable address
    int *ptr = &a;

    //how to display the address of variable
    // cout<<"address of a: "<<&a<<endl;
    // cout<<"pointer of a: "<<ptr;

    //difference of address between elements is four that shows integer takes four bytes and array stores memory continously.
    int arr[] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++){
        cout<<&arr[i]<<" ";
    }
    cout<<endl;

    
    //size of pointer depends on operatins system if os has 4GB RAM then 4 byte and if greate than 4GB then 8 byte 
    //if cpu is 32 bit = 4 byte that's why pointer is 4 byte and if cpu is greater than 32 bit then 8 byte.

    //now question arises when we know pointer size is fixed so we use int, char berfore *ptr
    //ansawer is data type helps pointer to tell how many bytes it has to read.

    //if we have address of variable we can also access of value that variable.

    cout<<"value "<<*ptr<<endl;
    return 0;
}