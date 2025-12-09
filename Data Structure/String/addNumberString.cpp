#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    string one = "345663";
    string two = "12345";

    string total;

    int pointer1 = one.size() - 1;
    int pointer2 = two.size() - 1;
    int sum, carry = 0;

    while (pointer2 >= 0)
    {

        sum = (one[pointer1] - '0') + (two[pointer2] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        total += c;
        pointer2--;
        pointer1--;
    }

    while (pointer1 >= 0)
    {
        sum = (one[pointer1] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        total += c;
        pointer1--;
    }

    if (carry)
    {
        total += '1';
    }

    reverse(total.begin(), total.end());
    cout << total;

    return 0;
}