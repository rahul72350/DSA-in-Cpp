#include<iostream>
using namespace std;


void toh(int n, int source, int helper, int destination){
    if(n == 1){
        cout<<"move disk "<<n<<"from "<<source<<" to "<<destination<<endl;
        return;
    }

    toh(n-1,source,destination,helper);
    cout<<"move disk "<<n <<"from "<<source<<" to"<< destination;
    toh(n-1,helper,source,destination);
}



int main(){

toh(3,1,2,3);





    return 0;
}