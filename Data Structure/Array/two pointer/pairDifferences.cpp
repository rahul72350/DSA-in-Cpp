#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){

    vector<int>v1 = {2,3,5,10,50,80};
    int size = v1.size();

    int start = 0, end = 1,target;
    cout<<"enter target: ";
    cin>>target;


    while(end < size){

        cout<<"value of start: "<<start<<endl;
        cout<<"value of end: "<<end<<endl;
        if(v1[end] - v1[start] == target){
            cout<<v1[end] << " - "<<v1[start]<<" = "<<target<<endl;
            return 1;
        }

        else if(v1[end] - v1[start] < target){
            end++;
        }
        else{
            start++;
        }
    }



    cout<<"value not found"<<endl;



    return 0;
}