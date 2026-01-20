#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printSubsequence(string str, int index, int size, string &temp, vector<string>&ans){

    if(index == size){
        ans.push_back(temp);
        return;
    }

    //no
    printSubsequence(str,index+1,size,temp,ans);
    temp.push_back(str[index]);
    printSubsequence(str,index+1,size,temp,ans);
    temp.pop_back();

}


int main(){

    string str = "abc";
    int size = str.size();
    string temp;
    vector<string>ans;

    printSubsequence(str,0,size,temp,ans);

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }





    return 0;
}