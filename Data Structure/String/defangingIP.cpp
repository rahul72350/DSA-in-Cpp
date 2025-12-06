#include <iostream>
using namespace std;

int main()
{

    string IP = "192.168.31.88";
    string ans = "";
    for (int i = 0; i < IP.size(); i++)
    {
        if (IP[i] == '.')
        {
            ans += "[.]";
        }
        else
        {
            ans += IP[i];
        }
    }

    cout << ans;

    return 0;
}