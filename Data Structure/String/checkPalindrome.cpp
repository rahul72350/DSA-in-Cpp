#include <iostream>
using namespace std;

void reverse(string &test)
{

    int size = test.size() - 1;
    for (int i = 0; i < test.size() / 2; i++)
    {
        char temp;
        temp = test[i];
        test[i] = test[size - i];
        test[size - i] = temp;
    }
}

int main()
{

    string input = "naman";

    int first = 0, end = input.size() - 1, count = 0;

    while (first < end)
    {
        if (input[first] != input[end])
        {
            cout << "given input is not a palindrome" << endl;
            return 0;
        }
        else
        {
            first++;
            end--;
        }
    }

    cout << "given input is a palindrome" << endl;

    return 0;
}