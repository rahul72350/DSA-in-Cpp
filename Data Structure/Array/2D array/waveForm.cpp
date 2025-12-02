#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows; i++)
    {

        if (i % 2 == 0)
        {
            // even column
            for (int j = 0; j < cols; j++)
            {
                cout << matrix[j][i] << " ";
            }
        }

        else
        {
            // odd columns
            for (int j = rows - 1; j >= 0; j--)
            {
                cout << matrix[j][i] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}