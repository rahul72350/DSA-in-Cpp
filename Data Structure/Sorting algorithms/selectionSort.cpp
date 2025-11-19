#include <iostream>
using namespace std;

// here we are going to understand the selection sort this is one of method that is used to sort the array's elements

// 2,3,5,1,4 ==> 1,2,3,4,5

// for three sorting algorithms we use students in row for morning school asembly
// let's start we have to sort the the students row in increasing order so we will use this approach first we will select first student in row and then find then find
// most lower height student in rest of students when you got that student swap their place then select second student and find most lower height student and then swap
// with selected student and so on.
// time complexity of this algorithm is O(n^2);
// space complexity(auxulary): O(1);

// sorting in increasing order

void selection_sort_inc(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {

        int minimum = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[minimum] > arr[j])
            {
                minimum = j;
            }
        }

        swap(arr[i], arr[minimum]);
    }
}

// sorting in decreasing order

void selection_sort_dec(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {

        int minimum = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[minimum] < arr[j])
            {
                minimum = j;
            }
        }

        swap(arr[i], arr[minimum]);
    }
}

int main()
{

    int arr[] = {3, 2, 4, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    selection_sort_inc(arr, size);

    // printing sorted array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}