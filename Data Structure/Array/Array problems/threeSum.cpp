// this is 3 sum problem and we have to solve this problem within time complexity O(n2) and space complexity O(1)

#include <iostream>
using namespace std;

// swapping function definition
void swap(int *val1, int *val2)
{
    int temp;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

// selection sort function definition
void selection_sort(int arr[], int n)
{
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}
// three sum function
int threeSum(int arr[], int n, int target)
{

    int right, left, ans, i;
    for (i = 0; i < n - 2; i++)
    {
        ans = target - arr[i];
        right = n - 1;
        left = i + 1;
        while (left < right)
        {
            if (arr[left] + arr[right] == ans)
            {
                return 1;
            }
            else if (arr[left] + arr[right] > ans)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
    }
    return 0;
}

int main()
{

    int arr[] = {2, 5, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "enter the target value: ";
    cin >> target;
    selection_sort(arr, n);
    cout << threeSum(arr, n, target);

    return 0;
}