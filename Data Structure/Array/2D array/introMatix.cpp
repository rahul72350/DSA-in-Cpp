#include<iostream>
#include<climits>
using namespace std;



int main(){

    int arr[3][3] = {1,9,3,4,2,3,4,2,5};

    int maxsum = 0;
    int index = 0;

    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(int j = 0; j < 3; j++){
            sum += arr[i][j];
        }
        cout<<"sum is: "<<sum<<endl;
        if(maxsum < sum){
            maxsum = sum;
            index = i;
        }
    }

    cout<<"answer is: "<<index<<endl;


    
    




    return 0;
}