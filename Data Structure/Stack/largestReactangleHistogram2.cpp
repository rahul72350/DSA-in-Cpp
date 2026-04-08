#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;




int main(){

    vector<int>height = {2,3,4,2,6,5,4,5,3};
    int size = height.size();
    vector<int>leftmin(size,-1);
    vector<int>rightmin(size, size);
    stack<int>st;
    int ans = 0;


    for(int i = 0; i < size; i++){

       while(!st.empty() && height[i] < height[st.top()]) {
    int x = st.top();
    st.pop();

    rightmin[x] = i;

    if(st.empty()) {
        leftmin[x] = -1;
    } 
    else {
        leftmin[x] = st.top();
    }

    ans = max(ans, height[x] * (rightmin[x] - leftmin[x] - 1));
}

        st.push(i);
    }

    
    //if stack is not empty 
    while(!st.empty()) {
    int x = st.top();
    st.pop();
    rightmin[x] = size;

    if(st.empty()) {
        leftmin[x] = -1;
    } 
    else {
        leftmin[x] = st.top();
    }

    ans = max(ans, height[x] * (rightmin[x] - leftmin[x] - 1));

    }

    cout<<"answer is: "<<ans<<endl;


    // for(auto i: rightmin){
    //     cout<<i<<" ";
    // }

    // cout<<endl;
    // for(auto j: leftmin){
    //     cout<<j<<" ";
    // }


    return 0;

}