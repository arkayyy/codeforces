#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        if (n == 2)
        {
            if (a < b)
            {
                cout << a << " " << b << endl;
                continue;
            }
        }

        vector<int> nums(n, 0);

        for (int i = 1; i <= n; i++)
            nums[i - 1] = i;

        int half = (n >> 1);

        if ((a == half && b == half + 1)) // e.g. 1,2,3,4,5,6 , n=6, a = 3 and b=4  ---> VERY IMP EDGE CASE
        {
            // swap(a,b);
            swap(nums[a - 1], nums[b - 1]);
            for (int i = half + 1; i <= n; i++)
                cout << nums[i - 1] << " ";
            for (int i = 1; i <= half; i++)
                cout << nums[i - 1] << " ";

            cout << endl;
        }
        else if ((b == half && a == half + 1))
        { // e.g. 1,2,3,4,5,6 , n=6, a = 4 and b=3  ---> VERY IMP EDGE CASE
            for (int i = half + 1; i <= n; i++)
                cout << nums[i - 1] << " ";
            for (int i = 1; i <= half; i++)
                cout << nums[i - 1] << " ";

            cout << endl;
        }
        else if (a >= 1 && a <= half && b > half && b <= n)
        {
            int lo = 0, hi = n - 1;
            bool foundA = false, foundB = false;
            while (lo < hi)
            {
                if (foundA && foundB)
                    break;

                if (nums[lo] == a)
                {
                    foundA = true;
                    lo = lo + 1;
                    continue;
                }
                if (nums[hi] == b)
                {
                    foundB = true;
                    hi = hi - 1;
                    continue;
                }

                swap(nums[lo], nums[hi]);
                lo++;
                hi--;
            }

            for (auto num : nums)
                cout << num << " ";

            cout << endl;
        }
        else // if both a and b lie in the same half.
        {    // OR if a lies in second half and b lies in first half, and if no. of elements to the right(ie.e larger than ) of a is less than n/2-1 in order to make it the
            // minimum among those elements while consituting in the left half, and same is with b and no. of elements left of it.
            cout << -1 << endl;
        }
    }

    return 0;
}