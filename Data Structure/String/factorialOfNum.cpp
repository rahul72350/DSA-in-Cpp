#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int input = 10;
    vector<int> count(1, 1);

    while (input > 1)
    {
        int size = count.size(), carry = 0, res;

        for (int i = 0; i < size; i++)
        {
            res = count[i] * input + carry;
            carry = res / 10;
            count[i] = res % 10;
        }

        while (carry)
        {
            count.push_back(carry % 10);
            carry /= 10;
        }

        input--;
    }

    reverse(count.begin(), count.end());

    for (int i = 0; i < count.size(); i++)
    {
        cout << count[i] << " ";
    }

    return 0;
}