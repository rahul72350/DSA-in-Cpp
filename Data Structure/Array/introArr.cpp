#include<iostream>
using namespace std;


//what is array = >An array is a collection of elements stored in contiguous (side-by-side) memory locations, and all elements are of the same data type.
//requirement = suppose you have to create variable that stores age so you have 100 students without array you need to create 100 variables with different name so this is situation where array required.
//accessing = we can access elements using their indexes.
//indexing starts from zero because the name of an array holds starting element address of array so array calculate memory address using this formula base_add + index * size of data type
//so if index is zero calculation will give base address that's array has zero indexing.



int main(){

    //declaring array and creating array

    int arr[5] = {2,3,4,6,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    //printing array elements
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

    //sum of array element problem
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    cout<<endl<<"sum of array elements "<<sum;
    

    


    return 0;
}