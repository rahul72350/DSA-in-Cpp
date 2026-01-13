#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


//lowercase to uppercase convertor
void upper(string& str,int size){

    if(size == -1){
        return;
    }
    str[size] = 'A' + str[size] - 'a';
    upper(str,size-1);

}

//uppercase to lowercase convertor
void lower(string& str, int size){
    if(size == -1){
        return;
    }

    str[size] = 'a' + str[size] - 'A';
    lower(str,size-1);
}

int main(){


    string str = "AMISHA";
    int length = str.size()-1;
    lower(str,length);
    cout<<str<<endl;



    return 0;
}