#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s;

    cin>>s;

    cout<< ((((int)s[0]>=65 && (int)s[0]<=90)?s[0]:(char)((int)s[0]-32)) + s.substr(1,s.length()-1))<<endl;

    return 0;
}