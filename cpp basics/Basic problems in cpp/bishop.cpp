#include<iostream>
using namespace std;

//here we have to find total move of bishop in chess
//user will enter cordinates


int main(){

    int rows;
    int cols;

    cout<<"enter rows: ";
    cin>>rows;
    cout<<"enter columns: ";
    cin>>cols;
    int total = 0;

    total += min(8 - rows, 8 - cols);
    total += min(8 - rows, cols - 1);
    total += min(rows - 1, 8 - cols);
    total += min(rows - 1, cols - 1);

    cout<<total;



    return 0;
}