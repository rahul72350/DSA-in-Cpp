#include<iostream>
#include<stack>
#include<vector>
using namespace std;

stack<int>st;

//we know range of value is 1 <= and >=100

void push(int val){
    if(st.empty()){
        st.push((101* val)+ val);
    }
    else{
        int storedval = (101 * val) + min(storedval % 101, val);
        st.push(storedval);
    }   
}


int pop(){
    if(st.empty()){
        return -1;
    }
    else{
    int ele = st.top() / 101;
    st.pop();
    return ele;
    }
    
}

int getMin(){
    if(st.empty()){
        return -1;
    }
    return st.top() % 101;
}

// 204 / 101 => 2
// 204 % 101 => 2

//203 / 101 => 2
//203 % 101 => 1



int main(){


    push(3);
    push(1);
    push(5);
    push(4);
    push(2);
 
    cout<<getMin()<<endl;


  
    



    return 0;
}