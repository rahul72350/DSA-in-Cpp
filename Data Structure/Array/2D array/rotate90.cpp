#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//transpose matrix

void transpose(vector<vector<int>>& arr){
    int rows = arr.size();
    int cols = arr[0].size();

    for(int i = 0; i < rows/2; i++){
        for(int j = i+1; j < cols; j++){
           swap(arr[i][j],arr[j][i]);
        }
    }
}

//reverse rows 

void reverse_rows(vector<vector<int>>&matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols/2; j++){
            swap(matrix[i][j],matrix[i][cols-1-j]);
        }
    }
}

int main(){

    
    vector<vector<int>>matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    transpose(matrix);
    reverse_rows(matrix);


    for(auto i: matrix){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }


    



    return 0;
}