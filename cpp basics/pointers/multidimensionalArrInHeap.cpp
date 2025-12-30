#include<iostream>
using namespace std;



int main(){

   // create 1D array in heap section
    int *oneD = new int[5];

    cout<<"enter the value: ";
    
    for(int i = 0; i < 5; i++){
        cin>>*(oneD+i);
    }

    cout<<"entered value is: \n";

    for(int i = 0; i < 5; i++){
        cout<<*(oneD + i);
    }

    //create 2D array in heap section

    int **row = new int*[4];

    for(int i = 0; i < 4; i++){
        row[i] = new int[5];
    }

    //fill the matrix with values

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            cin>>row[i][j];
        }
    }

    //print the values
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            cout<<row[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing the memory
    for(int i = 0; i < 4; i++){
      delete[] row[i];
    }

    delete[] row;

    //creating 3D array
    int depth = 2, rows = 3, cols = 4;

    //step 1: create an array of planes
    int ***ptr = new int** [depth];

    for(int i=0;i<rows;i++){
        ptr[i] = new int* [rows];
        for(int j=0; j<cols; j++){
            ptr[i][j]= new int [cols];
        }
    }

    int values = 1;

    for(int i=0; i<depth; i++){
        for(int j=0;j<rows;j++){
            for(int k=0;k<cols;k++){
                ptr[i][j][k]=values++;
            }
        }
    }

    //print the values:
    for(int i=0;i<depth;i++){
        for(int j=0;j<rows;j++){
            for(int k=0;k<cols;k++){
                cout<<ptr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<"---------------------------"<<endl;
    }
       for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<ptr[i][j];
        }
    }

   
        
    //releasing memory

    for(int  i=0; i<rows; i++){
         for(int j=0; j<cols; j++){
        delete[] ptr[i][j];
    }
    delete ptr[i];
    }
   delete[] ptr;
   

    delete[] ptr;





    return 0;
}