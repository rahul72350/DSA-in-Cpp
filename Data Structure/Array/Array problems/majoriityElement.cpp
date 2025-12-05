#include<iostream>
using namespace std;


int main(){

    int arr[] = {1,2,3,2,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int candidate = arr[0];
    int count = 1;

    for(int i = 1; i < size; i++){
        if(arr[i] == candidate){
            count++;
        }
        else{
            if(count == 0){
                candidate = arr[i];
                count = 1;
            }
            else{
                count--;
            }
        }
    }

    cout<<candidate<<endl;
    cout<<count<<endl;



    return 0;
}