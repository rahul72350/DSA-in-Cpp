#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){

    vector<vector<int>>matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };


    int rows = matrix.size();
    int cols = matrix[0].size();
    

    // int index = totalcol * row + column;
    int target;
    cin>>target;

    int start = 0, end = rows * cols - 1;

    while(start <= end){

        int mid = (start + end) / 2;
        cout<<"value of mid is: "<<mid<<endl;
        int elerow = mid / rows;
        int elecol = mid % rows;

        if(matrix[elerow][elecol] == target){
            cout<<"element found at matrix["<<elerow<<"]["<<elecol<<"]";
            return 0;
        }
        else if(matrix[elerow][elecol] > target){
           end = mid - 1;
        }
        else{
            start = mid + 1;
        }

    }


cout<<"element not found"<<endl;



    return 0;
}