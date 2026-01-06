#include<iostream>
using namespace std;


void print(int n){

    if(n == 1){
        cout<<n<<endl;
        return;
    }
    print(n-1);
    cout<<n<<endl;

}

void print2(int num,int n){
    if(num == n){
        cout<<num<<endl;
        return;
    }

    cout<<num<<endl;
    print2(num+1,n);
}


//print all even number between 1 to N

void printEven(int N){
    if(N==2){
        cout<<N<<endl;
        return;
    }

    printEven(N-1);

    if(N%2 == 0){
        cout<<N<<endl;
    }

}
int main(){


    // print(10);
    // print2(1,10);

    printEven(25);






    return 0;
}