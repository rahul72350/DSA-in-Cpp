#include<iostream>
#include<vector>

using namespace std;

void incree(int *num){
    (*num)++;
}

//call by pointer

void swapping(int *a,int *b){  //here pointers also occupy memory,
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArr(int *ptr,int size){          //int *ptr = int arr[] both are same
    for(int i = 0; i < size; i++){
        cout<<*(ptr+i)<<" ";
    }
}

//call by reference

void swapping2(int &a,int &b){ //here reference variable and passed variable both are pointing to same memory address.
    int temp = a;
    a = b;
    b = temp;
}

//we saw this in leetcode and gfg
void map(vector<int>&v1){
    for(int i = 0; i < v1.size(); i++){
        v1[i] = v1[i]*2;
    }
}
int main(){

    // int num = 10;

    // incree(&num);

    // cout<<num<<endl;

    int a = 10;
    int b = 20;
    swapping2(a,b);
    cout<<"value of a is: "<<a<<endl;
    cout<<"value of b is: "<<b<<endl;
    
    // int arr[] = {1,2,3,4,5};
    // int size = sizeof(arr)/sizeof(arr[0]);

    // printArr(arr,size);

    
    vector<int>v={1,2,3,4,5};
    //before calling function
    cout<<"vector element before calling function: "<<endl;
    for(auto i: v){
        cout<<i<<" ";
    }

    cout<<endl;

   
    map(v);
    //after calling function
    cout<<"vector elements after calling function: "<<endl;
    for(auto i: v){
        cout<<i<<" ";
    }
    return 0;
}