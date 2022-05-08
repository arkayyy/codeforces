#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    cin>>len;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}