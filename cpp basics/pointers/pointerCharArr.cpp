#include<iostream>
using namespace std;


int main(){


    char arr[] = "rahul";
    cout<<arr<<endl;  //if we use integer array it will print address but when have char type data it prints value one by one until null character occurs.

    char *ptr = arr;   // this is not thorwing error it meas arr contains the starting address.

    cout<<ptr<<endl;   

    //if we want to print address then we can use void pointer it hold the address but don't have information about data type.
    cout<<(void*)arr<<endl;

    //c++ also provide safest way of typecasting using static_cast<dt> this is compiled time typecasting and only allow restricted type casting so it provide safety .

    cout<<static_cast<void*>(arr)<<endl;

    char name = 'a';
    cout<<&name<<endl;   //it will work same  print values until null character occurs.
    cout<<static_cast<void*>(&name)<<endl;








    return 0;
}