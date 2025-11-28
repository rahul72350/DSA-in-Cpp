#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){

    vector<int>v1 = {1,2,3,3,5,1,2,3};
    sort(v1.begin(),v1.end());
    int first = 0, last = v1.size()-1,target;
    cout<<"enter target value: ";
    cin>>target;

    while(first < last){
        
        if(v1[first] + v1[last] == target){
            cout<<v1[first]<<" + "<<v1[last]<<" = " << target<<endl;
            return 0;
        }   
        else if(v1[first] + v1[last] > target){
            last--;
        }
        else{
            first++;
        }
    }

    cout<<"value not found";




    return 0;
}