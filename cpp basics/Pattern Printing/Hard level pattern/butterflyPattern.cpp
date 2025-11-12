#include<iostream>
using namespace std;

//here we have to print butterfly pattern

int main(){


     int n = 4;
    
    
     cout<<endl<<endl<<endl<<endl;
     for(int i = 1; i <= 4; i++){
        //star

        for(int j = 1; j <= i; j++){
            cout<<"* ";
        }
        
        //space

        for(int k = 1; k <= 2*(n-i); k++){
            cout<<"  ";
        }

        //star

        for(int l = 1; l <= i; l++){
            cout<<"* ";
        }   
        cout<<endl;
     }

     
     for(int i = 1; i <= n-1; i++){
        //star
        for(int j = 1; j <= n-i; j++){
            cout<<"* ";
        }

        //space

        for(int k = 1; k <= 2 * i; k++){
            cout<<"  ";
        }

        //star

        for(int l = 1; l <= n-i; l++){
            cout<<"* ";
        }
        cout<<endl;
     }



    cout<<endl<<endl<<endl<<endl;
    
    return 0; 
}