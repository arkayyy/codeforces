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

    

    while(t--)
    {
        string s;
        cin>>s;
        if (count(s.begin(),s.end(),'N')==1)
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }

    return 0;
}