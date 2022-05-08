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
    while (t)
    {
        if(t%1000 == 144)
        {
            t/=1000;
        }
        else if(t%100 == 14)
        {
            t/=100;
        }
        else if(t%10==1)
        {
            t/=10;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;

   
    return 0;
}