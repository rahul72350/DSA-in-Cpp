#include <iostream>
using namespace std;

int main()
{

    int input;
    cout << "enter input: ";
    cin >> input;

    int start = 1, end = input, mid, ans;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (mid * mid == input)
        {
            cout << "perfect sqrt is: " << mid << endl;
            return 0;
        }
        else if (mid * mid > input)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }

    cout << "approximate sqrt is: " << ans;

    return 0;
}