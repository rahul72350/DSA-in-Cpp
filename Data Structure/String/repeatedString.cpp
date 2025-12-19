#include <iostream>
#include <vector>
using namespace std;

//LPS array
void lpsfind(vector<int> &lps, string s)
{
    int pre = 0, suf = 1;
    while (suf < s.size())
    {
        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            pre++;
            suf++;
        }
        else
        {
            if (pre == 0)
            {
                lps[suf] = 0;
                suf++;
            }
            else
            {
                pre = lps[pre - 1];
            }
        }
    }
}

// KMP Pattern Matching
bool KMP_MATCH(string text, string pattern)
{
    int n = text.size();
    int m = pattern.size();

    vector<int> lps(m, 0);
    lpsfind(lps, pattern);

    int i = 0, j = 0;
    while (i < n)
    {
        if (text[i] == pattern[j])
        {
            i++;
            j++;
        }

        if (j == m)
        {
            return true; 
        }
        else if (i < n && text[i] != pattern[j])
        {
            if (j == 0)
            {
                i++;
            }
            else
            {
                j = lps[j - 1];
            }
        }
    }
    return false;
}

int main()
{
    string a = "abcd";
    string b = "cdabcdab";

    string temp = a;
    int repeat = 1;

  
    while (temp.size() < b.size())
    {
        temp += a;
        repeat++;
    }

    if (KMP_MATCH(temp, b))
    {
        cout << repeat;
        return 0;
    }

   
    temp += a;
    if (KMP_MATCH(temp, b))
    {
        cout << repeat + 1;
        return 0;
    }

    cout << -1;

    return 0;
}
