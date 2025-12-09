#include <iostream>
#include <vector>
using namespace std;

int main()
{
    

    string input = "leetcode";
    vector<int> count(52, 0);
    

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'o' || input[i] == 'u' || input[i] == 'i' || input[i] == 'A' || input[i] == 'E' || input[i] == 'O' || input[i] == 'U' || input[i] == 'I')
        { 
            
            int size = input[i] - 'A';
            count[size]++;

            input[i] = '#';
            
        }
    }

 
    string ans = "";

    for (int i = 0; i < 52; i++)
    {
        while (count[i])
        {
            char c = 'A' + i;
            ans += c;
            count[i]--;
        }
    }



 
    int pointer = 0;

    for(int i = 0; i < input.size();i++){
        if(input[i] == '#'){
            input[i] = ans[pointer];
            pointer++;
        }
    }

    cout << "answer is: " << input;

    return 0;
}