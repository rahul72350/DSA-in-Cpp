#include<iostream>
#include<stack>
using namespace std;



int main(){


    stack<int>st1;
    st1.push(4);
    st1.push(3);
    st1.push(2);
    st1.push(1);
    st1.push(8);

    int insert = 2;

    stack<int>temp;

    while (!st1.empty())
    {
        temp.push(st1.top());
        st1.pop();   
    }

    st1.push(insert);

    while(!temp.empty()){
        st1.push(temp.top());
        temp.pop();
    }


    
    




    return 0;

}