#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    string input = "aabbbcbbac";
    vector<int> count(256, 0);
    int diff = 0;
    int first = 0;
    int second = 0;
    int length = input.size();

    while (first < input.size())
    {
        if (count[input[first]] == 0)
        {
            diff++;
        }

        count[input[first]]++;
        first++;
    }

    for (int i = 0; i < 256; i++)
    {
        count[i] = 0;
    }

    first = 0;

    while (second < input.size())
    {

        while (diff && second < input.size())
        {
            if (count[input[second]] == 0)
            {
                diff--;
            }
            count[input[second]]++;
            second++;
        }

        length = min(length, second - first);

        while (diff != 1)
        {
            length = min(length, second - first);
            count[input[first]]--;

            if (count[input[first]] == 0)
                diff++;

            first++;
        }
    }

    cout << length;

    return 0;
}