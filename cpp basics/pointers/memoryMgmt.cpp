#include<iostream>
using namespace std;



int main(){

    //why this is not allowed in standard C++ 
    //but it works on my pc but standard c++ doesn't allows us, there is reason that's why it is not allowed.
    //reason is: if user enter large value that exceed RAM size then it will be cause of run time error.
    //that's why we enter static size of array now new question arises if user enter large value that exceeds RAM limit then it will also be cause of error but compile time error.
    
    // int n;
    // cout<<"enter the size of array: ";
    // cin>>n;

    // int arr[n];

    // for(int i = 0; i < 5; i++){
    //     cin>>arr[i];
    // }

    // for(int i = 0; i < 5; i++){
    //     cout<<arr[i]<<endl;
    // }


    //static memory allocation: allocate memory in stack.
    //we know the requirement of memory at compile time
    int a; 
    int b; 

    //dynamic memory allocation: allocate memroy in dynamic.
    //we don't have information about memory allocation at compile time, we know the requirement of memory at run time environment.
    //we use new keyword for active the heap section
    //for releasing memory we use delete keyword.


    int *p1 = new int;
    *p1 = 3;
    int *p2 = new int;
    *p2 = 5;
    int *p3 = new int[100];
    cout<<"enter the value of array: "<<endl;;
    
    for(int i = 0; i < 5; i++)
    {
        cin>>*(p3+i);
    }

    cout<<"entered value is: ";
    
    for(int i = 0; i < 5; i++){
        cout<<*(p3+i)<<" ";
    }




    //release the dynamic memory

    delete p1;
    delete p2;
    delete[] p3;


    return 0;
}