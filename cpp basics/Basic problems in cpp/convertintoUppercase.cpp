#include<iostream>
using namespace std;


//here we have to write code that produce capital letter as a output.

char capital(char small){
    if(small < 'a'){
        return small;
    }
    char result = 'A' + (small - 'a');
    return result;
}


int main(){

   char c = 'N';  
   cout<< capital(c);



    return 0;
}
