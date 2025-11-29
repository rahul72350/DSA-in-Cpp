#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;




int main(){

    vector<int>v = {9,5,8,12,2,3,7,4};
    int size = v.size();  
    int prefixMax = INT_MIN;

    for(int i = 0; i < size; i++){
        prefixMax = max(v[i],prefixMax);
    }
    cout<<"prefix element is: "<<prefixMax<<endl;

    int maxdiff = INT_MIN;

    for(int i = 0; i < size; i++){
        maxdiff = max(prefixMax - v[i],maxdiff);
    }

    cout<<maxdiff<<endl;





    return 0;
}