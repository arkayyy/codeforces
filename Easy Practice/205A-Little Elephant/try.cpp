#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n;
    cin>>n;
    map<ll, ll> mapCities;
    int minDist = INT_MAX;
    int minDistIndex = -1;
    for(int i = 0;i<n;i++)
    {
        ll dist;
        cin>>dist;
        mapCities[dist]++;
        if(dist<minDist){
            minDist = dist;
            minDistIndex = i;
        }
    }

    if(mapCities[minDist]==1) cout<<minDistIndex+1<<endl;
    else cout<<"Still Rozdil"<<endl;

    return 0;
}