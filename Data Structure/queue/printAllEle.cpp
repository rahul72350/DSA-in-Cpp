#include<iostream>
#include<queue>
#include<vector>
using namespace std;


int main(){

    queue<int>q;
    vector<int>ans;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    //here we are using extra array but we don't have to use extra array
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     ans.push_back(q.front());
    //     q.pop();
    // }

    // for(auto i: ans){
    //     q.push(i);
    // }

    // cout<<q.front();


    int size = q.size();

    while(size){
        cout<<q.front();
        q.push(q.front());
        q.pop();
        size--;
    }

    cout<<endl<<q.front()<<" this is what we want";




    return 0;
}