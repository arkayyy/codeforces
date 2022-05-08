#include<bits/stdc++.h>
using namespace std;

//taking long long is extremely important here since the coordinate can go upto 10^6 and w or h can also go upto 10^6, so the resulting area might overflow from integer
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
    {
        ll w,h;
        cin>>w>>h;
        ll lowHorizontalMin, lowHorizontalMax, upperHorizontalMin, upperHorizontalMax, leftVerticalMin, leftVerticalMax, rightVerticalMin, rightVerticalMax;

        ll n;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            ll p; cin>>p;
            if(i==n-1)
                lowHorizontalMax = p;
            if(i==0)
                lowHorizontalMin = p;
        }

        cin>>n;
        for(ll i=0;i<n;i++)
        {
            ll p; cin>>p;
            if(i==n-1)
                upperHorizontalMax = p;
            if(i==0)
                upperHorizontalMin = p;
        }

        cin>>n;
        for(ll i=0;i<n;i++)
        {
            ll p; cin>>p;
            if(i==n-1)
                leftVerticalMax = p;
            if(i==0)
                leftVerticalMin = p;
        }

        cin>>n;
        for(ll i=0;i<n;i++)
        {
            ll p; cin>>p;
            if(i==n-1)
                rightVerticalMax = p;
            if(i==0)
                rightVerticalMin = p;
        }
        
        cout<< max( max(abs(lowHorizontalMax-lowHorizontalMin)*h, abs(upperHorizontalMax-upperHorizontalMin)*h) , max(abs(leftVerticalMax-leftVerticalMin)*w, abs(rightVerticalMax-rightVerticalMin)*w) )<<endl;
    }

    return 0;
}