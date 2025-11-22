#include <iostream>
using namespace std;

int findInsertionPos(int arr[], int size, int target)
{

    int start = 0, end = size - 1, mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] >= target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return start;
}

int main()
{

    int arr[] = {2, 4, 4, 4, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    cout << "insertion position is: " << findInsertionPos(arr, size, target);

    return 0;
}