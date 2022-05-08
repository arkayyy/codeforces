#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> times;
    vector<int> pos(n);
    for (int i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        times.push_back({inp, i});
    }

    sort(times.begin(), times.end(), greater<>());

    bool sw = true;
    int a = 1, b = -1;
    for (auto time : times)
    {
        if (sw)
            pos[time[1]] = (a++);
        if (!sw)
            pos[time[1]] = (b--);

        sw = !sw;
    }
    cout << 0 << " ";
    for (auto p : pos)
        cout << p << " ";
    cout << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}