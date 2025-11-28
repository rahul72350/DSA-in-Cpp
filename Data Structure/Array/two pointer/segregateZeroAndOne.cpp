#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//here we have to segregate 0's and 1's 
//we will solve this problem using two pointer concepts

int main(){

    vector<int>v1 = {1,1,1,1,0};

    int first = 0, last = v1.size()-1;

    while(first < last){

        if(v1[first]  == 1 && v1[last] == 0){
            swap(v1[first],v1[last]);
            first++;
            last--;
        }

        else if(v1[first] == 0){
            first++;
        }
        else{
            last--;
        }
    }

    
    for(auto i: v1){
        cout<<i<<" ";
    }





    return 0;
}