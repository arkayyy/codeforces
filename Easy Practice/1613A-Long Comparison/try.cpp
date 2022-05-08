#include<bits/stdc++.h>
using namespace std;

#define ll long long

int countDigits(int num)
{int cnt = 0;
    while(num)
    {
        num/=10;
        cnt++;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll t;
    cin>>t;

    while(t--)
    {
        int x1,p1,x2,p2;
        cin>>x1>>p1>>x2>>p2;
        int noDigitsX1 = countDigits(x1)+p1;
        int noDigitsX2 = countDigits(x2)+p2;

        if(noDigitsX1>noDigitsX2) cout<<">"<<endl;
        else if(noDigitsX2>noDigitsX1) cout<<"<"<<endl;
        else{
            if(countDigits(x1)==countDigits(x2)){ 
                if(x1>x2) cout<<">"<<endl;
                else if(x1==x2) cout<<"="<<endl;
                else cout<<"<"<<endl;
            }
            else{
                //Find which one x1 or x2 is lexicographically greater
                string s1 = to_string(x1);
                string s2 = to_string(x2);
                bool flag = false;
                int i=0;
                for(i = 0;i<min(s1.length(),s2.length());i++)
                {
                if(s1[i]>s2[i]) {cout<<">"<<endl; flag = true; break;}
                else if(s1[i]<s2[i]) {cout<<"<"<<endl; flag = true; break;}
                
                }

                if(!flag) {
                    bool f = true;
                    while(i<s1.length()) if(s1[i++]-'0' > 0) {cout<<">"<<endl; f=false; break;}
                    while(i<s2.length()) if(s2[i++]-'0' > 0) {cout<<"<"<<endl; f=false; break;}
                    if(f)cout<<"="<<endl;
                }

            }
        }
    }
    

    return 0;
}