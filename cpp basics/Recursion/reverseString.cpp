#include<iostream>
using namespace std;


string reverse(string str,int size){
    if(size == -1){
        return "";
    }
    return str[size] + reverse(str,size-1);
}



void rev(string& str, int start, int end){
    if(start >= end){
        return;
    }
    swap(str[start],str[end]);
    rev(str,start+1,end-1);
}


int main(){

    string str = "rahul";
    int length = str.size()-1;
    rev(str,0,length);
    cout<<str;


    return 0;
}