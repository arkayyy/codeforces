#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        ll maxi = max(a, max(b, c));

        if (a == b && b == c)
        {
            cout << (1) << " " << (1) << " " << (1) << endl;
            continue;
        }
        else if (a == b && a == maxi)
            cout << (1) << " " << (1) << " " << (maxi - c + 1) << endl;
        else if (b == c && b == maxi)
            cout << (maxi - a + 1) << " " << (1) << " " << (1) << endl;
        else if (a == c && a == maxi)
            cout << 1 << " " << (maxi - b + 1) << " " << 1 << endl;
        else
            cout << (a < maxi ? (maxi - a + 1) : 0) << " " << (b < maxi ? (maxi - b + 1) : 0) << " " << (c < maxi ? (maxi - c + 1) : 0) << endl;
    }
    return 0;
}