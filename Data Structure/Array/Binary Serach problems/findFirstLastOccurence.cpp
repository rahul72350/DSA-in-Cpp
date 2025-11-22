#include <iostream>
using namespace std;

int first_occurrence(int arr[], int size, int target)
{
    int start = 0, end = size - 1, mid;
    int ans = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int last_occurrence(int arr[], int size, int target)
{
    int start = 0, end = size - 1, mid;
    int ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{

    int arr[] = {1, 2, 2, 3, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 1;

    cout << "first occurrence is: " << first_occurrence(arr, 8, target) << endl;
    cout << "last occurrence is: " << last_occurrence(arr, 8, target);

    return 0;
}