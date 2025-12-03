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


    int rows = matrix.size();
    int cols = matrix[0].size();

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols/2; j++){
            swap(matrix[i][j],matrix[i][cols-1-j]);
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols/2; j++){
           swap(matrix[rows-j-1][i],matrix[j][i]);
        }
    }
    //printing matrix

    for(auto i : matrix){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }




    return 0;
}