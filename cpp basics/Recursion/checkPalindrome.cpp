#include<iostream>
using namespace std;

int checkPalidrome(string str,int i,int l){

    
    if(i >= l){
        return 1;
    }
    return str[i] == str[l]? checkPalidrome(str,i+1,l-1): 0;

}


int main(){

    string str = "nommon";
    int length = str.size()-1;

    cout<<"return value is: " <<checkPalidrome(str,0,length);





    return 0;
}