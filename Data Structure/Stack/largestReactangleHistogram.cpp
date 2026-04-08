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
        while(!st.empty() && height[i] < height[st.top()]){
            rightmin[st.top()] =i;
            st.pop();
        }

        st.push(i);
    }

    for(int i = size - 1; i >= 0; i--){
        while(!st.empty() && height[i] < height[st.top()]){
            leftmin[st.top()] =i;
            st.pop();
        }

        st.push(i);
    }

    
   
    for(int i = 0; i < size; i++){
        ans = max(ans, height[i] * ((rightmin[i] - (leftmin[i]))-1));
        // cout<<height[i] <<" * "<<(rightmin[i] - (leftmin[i]))-1<<" = "<< height[i] * ((rightmin[i] - (leftmin[i]))-1) <<endl;
    }

  cout<<ans;







    return 0;
}