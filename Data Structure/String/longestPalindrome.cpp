#include <iostream>
#include <vector>
using namespace std;

// here in problem we have number of characters and we have to make palindrome and return the length of longest possible palindrome.

int main()
{

    string input = "abccccdd";

    vector<int> lower(26, 0);
    vector<int> upper(26, 0);

    int odd = 0;
    int ans = 0;

    for (int i = 0; i < input.size(); i++)
    {

        if (input[i] >= 'a')
        {
            lower[input[i] - 'a']++;
        }
        else
        {
            upper[input[i] - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (lower[i] % 2 == 0)
        {
            ans += lower[i];
        }
        else
        {
            ans += lower[i] - 1;
            odd = 1;
        }

        if (upper[i] % 2 == 0)
        {
            ans += upper[i];
        }
        else
        {
            ans += upper[i] - 1;
            odd = 1;
        }
    }

    ans += odd;

    cout << ans;

    return 0;
}