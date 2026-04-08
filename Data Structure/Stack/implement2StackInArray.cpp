#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int>arr(5,0);
int top1 = -1;
int top2 = arr.size();

void st1_push(int val){
    if(top1 + 1 == top2){
        cout<<"stack 1 overflow occurs"<<endl;
        return;
    }

    top1++;
    arr[top1] = val;
    
}

void st1_pop(){
    if(top1 == -1){
        cout<<"stack underflow occurs"<<endl;
        return;
    }
    top1--;
}

void st2_push(int val){
    if(top2 - 1 == top1){
        cout<<"stack 2 overflow occurs"<<endl;
        return;
    }

    top2--;
    arr[top2] = val;  
}


void st2_pop(){
    if(top2 == arr.size()){
        cout<<"stack underflow occurs"<<endl;
        return;
    }

    top2++;
}

int main(){

    
    st1_push(2);
    st1_push(3);
    st1_push(4);
    st2_push(5);
    st2_push(6);

    for(auto i: arr){
        cout<<i<<" ";
    }







    return 0;
}