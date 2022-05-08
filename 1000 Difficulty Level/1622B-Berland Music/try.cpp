#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> songs(n, 0);
        for (int i = 0; i < n; i++)
            cin >> songs[i];

        string s;
        cin >> s;
        vector<vector<int>> zeros;
        vector<vector<int>> ones;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zeros.push_back({songs[i], i});
            else
                ones.push_back({songs[i], i});
        }
        sort(zeros.begin(), zeros.end());
        sort(ones.begin(), ones.end());

        int p = 1;

        vector<int> ans(n, 0);

        for (auto z : zeros)
        {
            ans[z[1]] = p++;
        }
        for (auto o : ones)
        {
            ans[o[1]] = p++;
        }

        for (auto a : ans)
        {
            cout << a << " ";
        }

        cout << endl;
    }

    return 0;
}