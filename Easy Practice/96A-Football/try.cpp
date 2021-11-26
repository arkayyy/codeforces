#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string sequence = "";
    cin >> sequence;
    //SLIDING WINDOW APPROACH - O(N) time and O(1) space
    if (sequence == "" || sequence.length() < 7)
    {
        cout << "NO" << endl;
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < 7; i++)
        sum += (sequence[i] - '0');

    if (sum == 7 || sum == 0)
    {
        cout << "YES" << endl;
        return 0;
    }                           //calculating sum offirst 7 numbers in the sequence
    sum -= (sequence[0] - '0'); //removing an element from the starting of the window

    for (int i = 1; i + 6 < sequence.length(); i++)
    {
        sum += (sequence[i + 6] - '0'); //adding an element to the right to slide the window forward
        if (sum == 7 || sum == 0)       //if at any point all 7 elements in the window are 1's or 0's, this condition will be true.
        {
            cout << "YES" << endl;
            return 0;
        }
        sum -= (sequence[i] - '0'); //removing last element of this window
    }

    cout << "NO" << endl;

    return 0;
}
