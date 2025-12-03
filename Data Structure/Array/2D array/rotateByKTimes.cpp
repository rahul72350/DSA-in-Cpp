#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){

    vector<vector<int>>matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
    };

    int k; 
    cout<<"how many times do you want rotate the matrix: ";
    cin>>k;

    for(int i = 0; i < k % 4; i++){

    //transpose matrix
    int rows = matrix.size();
    int cols = matrix[0].size();

    for(int i = 0; i < rows/2; i++){
        for(int j = i+1; j < cols; j++){
           swap(matrix[i][j],matrix[j][i]);
        }
    }


    //reverse rows 
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols/2; j++){
            swap(matrix[i][j],matrix[i][cols-1-j]);
        }
    }
}


    //printing array

    for(auto i: matrix){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }




    return 0;
}