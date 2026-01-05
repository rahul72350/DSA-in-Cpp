#include<iostream>
using namespace std;


//when function call itself again and again until the specific condition satisfy.
//if problem can be solved using iterative way that can be solved recursive way as well.


void birthday(int days){

    if(days == 0){
        cout<<"happy birthday"<<endl;
        return;
    }
    cout<<days<<" Days left for birthday"<<endl;

    birthday(days-1);

}

//print n to 1 

/*
print(1) = cout<<1
print(2) = cout<<2, print(1)
print(3) = cout<<3, print(2)
print(4) = cout<<4, print(3)
print(n) = cout<<n, print(n-1);  (General form) ----> with the help of this line we can create recursive function easily.
*/

void print(int n){
    if(n == 1){
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    print(n-1);
}


int main(){

 
    birthday(4);

    print(10);




    return 0;
}