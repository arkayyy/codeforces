#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool flag = true;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        vector<int> b(n, 0);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        //sorting both the arrays because we can consider any permutation of the array a. So it doesn't matter in what form, but our aim is to match all the elements of both the arrays, and find out that if they are same or atmost at difference = 1 from eadch other.
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool flag = true;

        for (int i = 0; i < n; i++)
        {

            if ((a[i] != b[i]) && (a[i] + 1 != b[i])) // match the elements of both the arrays, and find out that if they are same or atmost at difference = 1 from eadch other. if not, display negative result
            {                                         //since the array a is sorted, no element will occur in the future (a[i]) which will be equal to b[i].
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
