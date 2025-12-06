#include<iostream>
#include<vector>
using namespace std;


int main(){


   //create vector 
   vector<vector<int>> matrix(3,vector<int>(5,1));

   int row = matrix.size();
   int cols = matrix[0].size();

   cout<<"number of rows is: "<<row<<endl;
   cout<<"number of cols is: "<<cols<<endl;


    return 0;
}