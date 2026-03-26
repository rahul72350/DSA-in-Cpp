#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;



int main(){

    vector<int>arr = {2,3,5,-4,6,-2,-8,9};
    stack<int>s;

    for(int i = 0; i < arr.size(); i++){
        if(s.empty()){
            s.push(arr[i]);
        }

        else if(arr[i] >= 0 && s.top() >= 0){
            s.push(arr[i]);
        }
        else if(arr[i] < 0 && s.top() < 0){
            s.push(arr[i]);
        }
        else{
            s.pop();
        }
    }

    arr.clear();

    int i = arr.size()-1;
   while(!s.empty()){
    arr.push_back(s.top());
    s.pop();
   }

   

   reverse(arr.begin(),arr.end());

   for(auto i: arr){
    cout<<i<<" ";
   }


   



    return 0;
}