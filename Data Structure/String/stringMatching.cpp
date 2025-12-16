#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void lpsfind(vector<int>&lps, string s){
    
    int pre = 0, suf = 1;
    while(suf < s.size()){
        if(s[pre] == s[suf]){
            lps[suf] = pre + 1;
            pre++;
            suf++;
        }

        else{
            if(pre == 0){
                lps[suf] = 0;
                suf++;
            }
            else{
                pre = lps[pre-1];
            }
        }
    }
}


int main(){

    string hystack = "abcdaabceaabceaabdop";
    string needle = "aabceaabdo";

    vector<int>lps(needle.size(),0);
    lpsfind(lps,needle);

    int first = 0, second = 0;

    while(second < needle.size() && first < hystack.size()){
        if(needle[second] == hystack[first]){
            second++;
            first++;
        }
        else{
            if(second == 0){
                first++;
            }
            else{
                second = lps[second-1];
            }
        }
    }

    if(second == needle.size()){
        cout<<"string matched found"<<endl;
        cout<<"starting index is: " <<first - second;
        return 1;
    }

 
    cout<<"string didn't exist";
    




    return 0;
}