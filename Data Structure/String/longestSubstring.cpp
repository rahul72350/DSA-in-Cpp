#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    string input = "abcdecbeadf";
    vector<int> count(256, 0);

    int pointer1 = 0;
    int pointer2 = 0;

    int length = 0;

    while (pointer2 < input.size())
    {

        while (count[input[pointer2]])
        {
            count[input[pointer1]] = 0;
            pointer1++;
        }

        count[input[pointer2]] = 1;

        length = max(length, pointer2 - pointer1 + 1);
        pointer2++;
    }

    cout << length << endl;

    return 0;
}