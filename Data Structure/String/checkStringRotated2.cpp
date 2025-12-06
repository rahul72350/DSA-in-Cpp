#include <iostream>
using namespace std;

void clock(string &str)
{

    int size = str.size() - 1;
    char last = str[size];

    for (int i = size - 1; i >= 0; i--)
    {
        str[i + 1] = str[i];
    }

    str[0] = last;
}

void anticlock(string &str)
{
    int size = str.size() - 1;
    char first = str[0];

    for (int i = 0; i < size; i++)
    {
        str[i] = str[i + 1];
    }

    str[size] = first;
}

int main()
{

    string str = "amazon";
    string test = "azonam";

    string anticlock1 = str;
    string clock1 = str;

    for (int i = 0; i < 2; i++)
    {
        clock(clock1);
    }

    for (int i = 0; i < 2; i++)
    {
        anticlock(anticlock1);
    }

    if (test == clock1 || test == anticlock1)
    {
        cout << "valid";
    }
    else
    {
        cout << "not valid" << endl;
    }

    return 0;
}