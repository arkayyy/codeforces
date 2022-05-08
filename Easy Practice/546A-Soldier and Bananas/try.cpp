#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w, n, k;
    cin>>k>>n>>w;

    cout<< ((((((w*(w+1))>>1)*k)-n)<0)?0:((((w*(w+1))>>1)*k)-n)) <<endl;

    return 0;
}