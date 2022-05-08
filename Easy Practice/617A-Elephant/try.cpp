#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int n5 = n/5;
    n-=(5*n5);
    int n4 = n/4;
    n-=(4*n4);
    int n3 = n/3;
    n-= (3*n3);
    int n2 = n/2;
    n-=(2*n2);
    int n1 = n;
    n-=n1;

    cout<<n1+n2+n3+n4+n5<<endl;

    return 0;
}