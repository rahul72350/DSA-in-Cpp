#include<iostream>
using namespace std;


int main(){


    int arr[] = {1,2,3,4,5};
    int size =  sizeof(arr)/sizeof(arr[0]);

    int* ptr = arr;

    // cout<<ptr;
    // cout<<endl<<ptr;

    //(base address) + (1 * data type)
    // 500 + (1 * 4);
    //504

    //ptr arithmetic move to unit of data type not a byte.
    cout<<ptr++<<endl;

    cout<<*(arr+1)<<endl; // arr[1] = *(arr+1) both are equal that why 1[arr] is also work.


    for(int i = 0; i < 5; i++){
        cout<<*(ptr+i)<<" ";
    }

    cout<<endl;

    for(int i = 0; i < 5; i++){
        cout<<ptr[i]<<" ";
    }


  //address of variables in symbol table is constant they can't modified.
  //this is why because if c++ allowed user to allocate memory manually then it can be cause of data lose.

  // cout<<arr++; //this is not allowed because we can't manually set memory location of variable if it is allowed then it can be cause of data lose.



    return 0;
}