#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int>d;
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);
    cout<<d.front();



    return 0;
}