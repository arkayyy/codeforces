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

    if((t&1)==0)
    {
        if(((t>>1)&1)==0)
            {cout<<"YES"<<endl; return 0;}
        else if( ((t>>1)+1 - t)!=0 &&   (((t>>1)+1 - t)&1)==0)
            {cout<<"YES"<<endl; return 0;}
        else
            {cout<<"NO"<<endl; return 0;}
    }
    cout<<"NO"<<endl;
    return 0;
}