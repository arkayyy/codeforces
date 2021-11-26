#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    int cnt = 0;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(((a&b)&c)) cnt++;

        else if((a&b) ||( b&c) || (a&c)) cnt++; 

    }
    cout<<cnt<<endl;
    return 0;
}