#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    string sentence = "am2 i1 bca4 pursuing3 sd6 from5 college7"; 

    vector<string> count(10, "");
    string word = "";

    for (int i = 0; i < sentence.size(); i++)
    {
        word += sentence[i];
        if (sentence[i] == ' ')
        {
            word.pop_back();
            word.pop_back();
            count[sentence[i - 1] - '0'] = word;
            word = "";
        }
        else
        {
            if (i == sentence.size() - 1)
            {
                word.pop_back();
                count[sentence[i] - '0'] = word;
            }
        }
    }

    string ans = "";

    for (int i = 1; i < count.size(); i++)
    {
        ans += count[i] + " ";
    }

    cout << ans;

    

    return 0;
}