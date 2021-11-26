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
        int x2,y2;
        cin>>x2>>y2;

        if((x2+y2)&1==1) //if distance between A and B is odd it can't divided into two halves
          {  cout<<-1<<" "<<-1<<endl; }

        else if(x2>y2)  
        { cout<<((x2+y2)>>1)<<" "<<0<<endl;}

        else
        {
            cout<<0<<" "<<((x2+y2)>>1)<<endl;
        }
    }
    return 0;
}