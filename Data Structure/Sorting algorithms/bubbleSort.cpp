#include <iostream>
using namespace std;

// bubble sort
//here we will use same approach like student standing in row for assembly let's start
// so first we will start from first student and then compare him from previous student if selected student taller then previous then swapped, now select second 
// and check him with its previous student if selected short than previous no swapp operation will perform, now select third student and compare him with previous student and so on.

//time complexity O(n^2)
//bubble sort in increasing order

void bubble_sort_inc(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
        {
            break;
        }
    }
}

//bubble sort in decreasing order

void bubble_sort_dec(int arr[],int n){
     for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
       
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
        {
            break;
        }
    }
}



int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

   
    bubble_sort_dec(arr,size);

    // printing sorted array

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}