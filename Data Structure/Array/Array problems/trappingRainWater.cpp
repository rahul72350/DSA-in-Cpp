#include <iostream>
using namespace std;

int n = 8;
int arr[] = {4, 2, 0, 5, 2, 6, 2, 3};
int maxheight = arr[0];
int index = 0;
int leftmax = arr[0];
int water = 0;
int rightmax = arr[n - 1];
int i;

// finding highest building
void highest()
{
    for (i = 1; i < n; i++)
    {
        if (maxheight < arr[i])
        {
            maxheight = arr[i];
            index = i;
        }
    }
}

// solving left part
void leftpart()
{
    for (i = 0; i < index; i++)
    {
        if (leftmax > arr[i])
        {
            water += leftmax - arr[i];
        }
        else
        {
            leftmax = arr[i];
        }
    }
}

// solving right part
void rightpart()
{
    for (i = n - 1; i > index; i--)
    {
        if (arr[i] < rightmax)
        {
            water += rightmax - arr[i];
        }
        else
        {
            rightmax = arr[i];
        }
    }
}
int main()
{
    highest();
    leftpart();
    rightpart();
    cout << water;

    return 0;
}