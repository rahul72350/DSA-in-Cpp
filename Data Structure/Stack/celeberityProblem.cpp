#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main(){

    stack<int>st;
    vector<vector<int>>matrix = {
        {1,1,0},
        {0,1,0},
        {0,1,1}
    };

    int size = matrix.size();  

    for(int i = size-1; i >= 0; i--){
        st.push(i);
    }

    
    while(st.size() > 1){

        int first = st.top();
        st.pop();
        int second = st.top();
        st.pop();

        if(matrix[first][second] && !matrix[second][first]){
            st.push(second);
        }
        else if(!matrix[first][second] && matrix[second][first]){
            st.push(first);
        }
    }

    if(st.empty()){
        cout<<"no celebrity found"<<endl;
        return 0;
    }

    int num = st.top();

    int row = 0, col = 0;

    for(int i = 0; i < size; i++){
        row += matrix[num][i];
        col += matrix[i][num];
    }

    if(row == 0 && col == size-1){
        cout<<num<<" is celebrity"<<endl;
    }
    else{
        cout<<"no celebrity found"<<endl;
    }

    return 0;
}