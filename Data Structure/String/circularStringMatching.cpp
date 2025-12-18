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



    string s1 = "cdeabroab";
    s1 += s1;

    string s2 = "abcde";

    vector<int>lps(s2.size(),0);
    lpsfind(lps,s2);

    int first = 0, second = 0;

    while(second < s2.size() && first < s1.size()){
        if(s2[second] == s1[first]){
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

    if(second == s2.size()){
        cout<<"string matched found"<<endl;
        return 1;
    }

 
    cout<<"string didn't exist";
    



    





    return 0;
}