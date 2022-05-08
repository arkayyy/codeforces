#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin>>s>>t;

    int len = s.length();

    for(int i = 0;i<len;i++)
    {
        if((int)s[i]>=65 && (int)s[i]<=90 && (int)t[i]>=65 && (int)t[i]<=90)
            {
                if(((int)s[i])+32 > ((int)t[i])+32)
                {cout<<1<<endl; return 0;}
                else if(((int)t[i])+32 > ((int)s[i])+32)
                {cout<<-1<<endl; return 0;}
            }
        
        else if((int)s[i]>=65 && (int)s[i]<=90)
        {
            if(((int)s[i])+32 > t[i])
                {cout<<1<<endl; return 0;}
            else if(((int)s[i])+32 < t[i])
                {cout<<-1<<endl; return 0;}
        }
            

        else if((int)t[i]>=65 && (int)t[i]<=90)
        {
            if( ( (int)t[i])+32 > (int)s[i])
                {cout<<-1<<endl; return 0;}
            else if(( (int)t[i])+32 < (int)s[i])
            {cout<<1<<endl; return 0;}
        }


        else if((int)s[i] > (int )t[i])
            {cout<<1<<endl; return 0;}
        else if((int)t[i] > (int)s[i])
            {cout<<-1<<endl; return 0;}
    }

    cout<<0<<endl;

    return 0;
}