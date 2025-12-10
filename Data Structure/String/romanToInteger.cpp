#include <iostream>
using namespace std;


int num(char r)
{
    switch (r)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return 0;
    }
}

int main()
{

    string input = "MCCXLVIII";

    int sum = 0;
    int index = 0;

    while (index < input.size() - 1)
    {
        if (num(input[index]) < num(input[index + 1]))
        {
            sum -= num(input[index]);
        }
        else
        {
            sum += num(input[index]);
        }

        index++;
    }

    sum += num(input[index]);

    cout << sum;

    return 0;
}