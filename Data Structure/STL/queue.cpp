#include<iostream>
#include<queue>
using namespace std;


int main(){

    queue<int>q;

    q.push(4);
    q.push(5);
    q.push(6);
    q.pop();
    q.pop();

    cout<<q.back();


    return 0;
}