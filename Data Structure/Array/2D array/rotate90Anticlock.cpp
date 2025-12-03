#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void transpose(vector<vector<int>>& matrix){
     int rows = matrix.size();
     int cols = matrix[0].size();

       for(int i = 0; i <= rows/2; i++){
        for(int j = i+1; j < cols; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

 }

 void reverse_row(vector<vector<int>>&matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols/2; j++){
            swap(matrix[j][i],matrix[rows-1-j][i]);
        }
    }

 }




int main(){


    vector<vector<int>>matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
    };

    transpose(matrix);
    reverse_row(matrix);

    for(auto i: matrix){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    




    return 0;
}