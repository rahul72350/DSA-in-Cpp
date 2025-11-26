#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int arr[] = {3, 6, 11, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int h = 8;

    int start = 0, end = INT_MIN, ans, mid;
    int time;

    for (int i = 0; i < size; i++)
    {
        start += arr[i];
        end = max(end, arr[i]);
    }
    start /= h;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        time = 0;
        for (int i = 0; i < size; i++)
        {
            time += arr[i] / mid;
            if (arr[i] % mid)
            {
                time++;
            }
        }

        if (time > h)
        {

            start = mid + 1;
        }
        else
        {
            end = mid - 1;
            ans = mid;
        }
    }

    cout << ans;

    return 0;
}