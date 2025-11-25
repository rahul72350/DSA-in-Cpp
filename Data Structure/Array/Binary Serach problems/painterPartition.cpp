#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[] = {5,10,30,20,15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int start = INT_MIN, end = 0, mid, ans, k = 3,wall, day;

    for(int i = 0; i < size; i++){
        start = max(start,arr[i]);
        end += arr[i];
    }

    while(start <= end){
        mid = start + (end - start) / 2;
        wall = arr[0];
        day = 1;

        for(int i = 1; i < size; i++){
            wall += arr[i];

            if(mid < wall){
                wall = arr[i];
                day++;
            }
        }
        if(day <= k){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    cout<<ans;


    return 0;
}