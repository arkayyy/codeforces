#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rowOne = -1, colOne = -1;

    for(int i = 0; i<25;i++)
    {
        int inp;
        cin>>inp;
        if(inp==1)
            {rowOne = i/5; colOne = i%5; }
    }

    cout<< abs(2-rowOne)+abs(2-colOne)<<endl;

    return 0;
}