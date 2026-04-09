#include<iostream>
#include<queue>
#include<vector>
using namespace std;


int main(){


    int k = 2;
    int time = 0;
    vector<int>v = {1,5,2,3,7};
    queue<int>q;

    for(int i = 0; i < v.size(); i++){
        q.push(i);
    }


    while (v[k])
    {
        
        v[q.front()]--;
        
        if(v[q.front()]){
            q.push(q.front());
            q.pop();
        }
        else{
            q.pop();
        }
        time++;
    }

    cout<<"time is: "<<time<<endl;
    






    return 0;
}