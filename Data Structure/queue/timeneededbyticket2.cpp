#include<iostream>
#include<conio.h>
#include<queue>
#include<vector>
using namespace std;


int main(){

    vector<int>v = {2,6,4,3,7};
    int k = 4;
    int time = 0;

    for(int i = 0; i <= k; i++){
        time += min(v[k],v[i]);
    }

    for(int i = k+1; i < v.size(); i++){
        time += min(v[k]-1, v[i]);
    }

    cout<<"total time is: "<<time<<endl;




    return 0;
}