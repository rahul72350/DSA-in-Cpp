#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string str = "dcabezyouq"; // abcde

    vector<int> count(26, 0);

    for (int i = 0; i < str.size(); i++)
    {
        int x = str[i] - 'a';
        count[x]++;
    }

    str = "";
    for (int i = 0; i < 26; i++)
    {
        while (count[i])
        {
            str += 'a' + i;
            count[i]--;
        }
    }

    cout << str << endl;

    return 0;
}