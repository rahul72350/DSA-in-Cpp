#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int arr[] = {1, 2, 4, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int start = 1, end = 8;  //here i end is hardcoded we have to write a function that will find max distance then subtract it with minimum distance

    int mid, ans;
    int count;
    int stalls;

    while (start <= end)
    {

        mid = start + (end - start) / 2;
        stalls = arr[0];
        count = 1;

        for (int i = 1; i < size; i++)
        {
            if (stalls + mid <= arr[i])
            {
                count++;
                stalls = arr[i];
            }
        }

        if (k <= count)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << ans;

    return 0;
}