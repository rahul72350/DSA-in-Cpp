#include<iostream>
using namespace std;

int countVowels(string str, int size){

    if(size == -1){
        return 0;
    }

    if(str[size] == 'a' || str[size] == 'e' || str[size] == 'i' || str[size] == 'o' || str[size] == 'u'){
        return 1  + countVowels(str,size-1);
    }
    else{
        return countVowels(str,size-1);
    }
}

int main(){

    string str = "rahul";
    int length = str.size()-1;

   cout<<"answer is: "<<countVowels(str,length);



    return 0;
}