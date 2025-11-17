#include<iostream>
#include<climits>
using namespace std;


int main(){

    int arr[1000];
    int size;
    int max = INT_MIN;
    cout<<"enter size of array: ";
    cin>>size;

    cout<<"enter elements: \n";
    
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    cout<<"maximum is: "<<max;

    

    





    return 0;
}