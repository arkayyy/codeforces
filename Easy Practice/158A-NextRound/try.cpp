#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n, -1);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0 && nums[i] >= nums[k - 1])
            cnt++;
    }
    ////
    cout << cnt << endl;

    return 0;
}