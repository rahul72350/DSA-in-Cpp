#include<iostream>
using namespace std;


// binary search provide us to solve problem in O(log2N) that is good better than O(n^2)
// requirment: binary array only applicable when you have sorted data
// concept: binary search half searching at each iteration


int main(){

    //here we are using sorted array in increasing order
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"enter target: ";
    cin>>target;

    int start = 0, end = size - 1, mid;

    while(start <= end){

    //this gives you integer overflow becasue when we have start and end value is big in number and when we add both there is chances that result after addition exceeds 32767
    // so overcome from this situation we use start + (end - start) / 2 or end - (end - start) / 2;

        mid = start + (end - start) / 2;  

   
        if(arr[mid] == target){
            cout<<"value found at index: "<<mid<<endl;
            return 1;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }



    cout<<"value not present"<<endl;


    return 0;
}