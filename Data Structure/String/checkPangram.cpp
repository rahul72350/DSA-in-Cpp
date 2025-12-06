#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string word = "abcdefghijklmnopqrstuvwxyzmonkeyrahul";
    vector<int> count(26, 0);

    for (int i = 0; i < word.size(); i++)
    {
        int x = word[i] - 'a';
        count[i] = 1;
    }

    for (auto i : count)
    {
        if (i != 1)
        {
            cout << "given sentence is not a pangram";
        }
    }

    cout << "this is pangram";

    return 0;
}