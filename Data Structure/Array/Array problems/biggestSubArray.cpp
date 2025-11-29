#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

//this approach also known as kadanes algo

int main(){


    vector<int>v = {3,4,-5,8,-12,7,6,-2};
    int size = v.size();
    int prefix = 0;
    int ans = INT_MIN;

    for(int i = 0; i < size; i++){
      
        if(prefix < 0){
            prefix = 0;
        }

        prefix += v[i];
        ans = max(prefix,ans);
        
    }


    cout<<"biggest subArray sum is: "<<ans<<endl;


    return 0;
}