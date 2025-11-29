#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){

    vector<int>v = {3,4,-2,5,8,20,-10,8};
    int size = v.size();

    int sum = 0;
    for(auto i: v){
        sum += i;
    }

    int prefix = 0;

    for(int i = 0; i < size; i++){
        prefix += v[i];
        int ans = sum - prefix;
        if(prefix == ans){
            cout<<"equal partition possible"<<endl;
            cout<<"first partition is start from index: "<<"[0,"<<i<<"]"<<endl;
            cout<<"second partition is start from index: ["<<i+1<<","<<size-1<<"]"<<endl;
            return 1;
        }


    }
    
  
      
cout<<"equal partition not possible"<<endl;

    return 0;
}