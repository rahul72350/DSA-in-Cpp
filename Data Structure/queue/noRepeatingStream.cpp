#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){

    string a = "ababdc";
    string b = "";
    vector<int> repeated(26, 0);
    queue<char> q;

    for(int i = 0; i < a.size(); i++){

        char ch = a[i];
        repeated[ch - 'a']++;
        q.push(ch);

        while(!q.empty() && repeated[q.front() - 'a'] > 1){
            q.pop();
        }
        
        if(q.empty()){
            b += '#';
        } else {
            b += q.front();
        }
    }

    cout << b;

    return 0;
}