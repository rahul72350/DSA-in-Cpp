#include<iostream>
using namespace std;

/*
3,4,5
2,3,4
2,4,5

*/

int main(){


    int arr[3][3] = {3,4,5,2,3,4,2,4,5};
    
   int rows = 3;
   int cols = 3;

   for(int i = 0; i < rows; i++){
    
        cout<<arr[i][i]<<" ";
    
   }


    return 0;
}