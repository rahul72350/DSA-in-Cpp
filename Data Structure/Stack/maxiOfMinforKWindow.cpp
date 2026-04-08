#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{

    vector<int> arr = {10, 20, 15, 50, 10, 70, 30};
    int n = arr.size();

    vector<int> ans(n, 0);
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
        {
            int index = st.top();
            st.pop();

            int range;
            if (st.empty())
            {
                range = i;
            }
            else
            {
                range = i - st.top() - 1;
            }

            ans[range - 1] = max(ans[range - 1], arr[index]);
        }
        st.push(i);
    }

    while (!st.empty())
    {
        int index = st.top();
        st.pop();

        int range;
        if (st.empty())
        {
            range = n;
        }
        else
        {
            range = n - st.top() - 1;
        }

        ans[range - 1] = max(ans[range - 1], arr[index]);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        ans[i] = max(ans[i], ans[i + 1]);
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}

