#include<iostream>
#include<vector>                //vector libarary
#include<algorithm>             //contains vector related methods
using namespace std;

//why do we need of vector because solve the tradition problem dynamic size of array in array we need to define array size in advance and it can't grow and shrink after
//declaration but vector provides you flexibility. another reason is vector memory management and vector provide some usefull methods like sort, binary search etc.


int main(){

    //declaration of vector
    
    //vector declaration and initialization
    vector<int>v1 = {1,2,3,4,5,6};

    //vectore declaration with size and default value
    vector<int>v2(20,0);
    vector<int>v3(10);   //vector declaration with size

    //inserting a element at the end of vector
    v3.push_back(2);
    v3.push_back(3);
    v3.push_back(4);
    v3.push_back(5);

    //deleting a element at the end of vector
    v3.pop_back();
    v3.pop_back();
    v3.pop_back();

    cout<<v3.size()<<endl;   //this method will give you size of vector 
    cout<<v3.capacity()<<endl;   //this method will give you capacity of vector
    cout<<boolalpha<<v3.empty()<<endl;  //this method will return you either vector is empty or no

    //remove all elements
    v2.clear();

    // some userful and common methdos
    vector<int>v4 = {1,2,3,4,5,6,7,9};

    cout<<"front value is: "<<v4.front()<<endl;
    cout<<"back value is: "<<v4.back()<<endl;

    //reversing the vector
    reverse(v4.begin(),v4.end());

    //sort the vector
    //asscending order
    sort(v4.begin(),v4.end());

    //descending order
    sort(v4.begin(),v4.end(),greater<int>());

    //binary serach in vector
    //this method only return true or false
    cout<<"binarys search value: "<<binary_search(v4.begin(),v4.end(),1)<<endl;
    
    for(auto i: v4){
        cout<<i<<" ";
    }
    cout<<endl;
  









    
    


    


    return 0;
}