#include<iostream>
#include<conio.h>
#include<vector>
#include<stack>
#include<queue>

using namespace std;


void display(queue<int>q){

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    cout<<endl;
}

int main(){

    vector<int>arr = {3,6,2,7,8,11};
    queue<int>q;
    int k = 3;

    for(int i = 0; i < k-1 ; i++){
        q.push(arr[i]);
    }


    for(int i = k-1; i < arr.size(); i++){
        q.push(arr[i]);
        display(q);
        q.pop();
    }

    return 0;
}