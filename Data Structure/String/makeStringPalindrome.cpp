#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;



int main(){

    string s1 = "aaaotcaakr";
    string rev = s1;
    s1 += '$';
    reverse(rev.begin(),rev.end());
    
    s1 += rev;

    vector<int>lps(s1.size(),0);
    int pre = 0, suf = 1;

    while(suf < s1.size()){
        if(s1[pre] == s1[suf]){
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

    int ans = (rev.size()) -lps[s1.size()-1];
    cout<<ans;
 






    return 0;
}