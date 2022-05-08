#include<bits/stdc++.h>
using namespace std;

struct plus_is_space : std::ctype<char> {
plus_is_space() : std::ctype<char>(get_table()) {}
static mask const* get_table()
{
static mask rc[table_size];
rc['+'] = std::ctype_base::space;
//rc['\n'] = std::ctype_base::space;  //any custom delimiter can be set here
return &rc[0];
}
};

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin.imbue(locale(cin.getloc(), new plus_is_space)); 

    priority_queue<int,vector<int>, greater<int>> s;

    char c;
    while(cin>>c && c!='\n')
    {
        s.push(c-'0');
    }

    string ans = "";
    while(!s.empty())
    {

        ans+= (s.top()+'0');
        ans+= "+";
        s.pop();
    }

    cout<<ans.substr(0,ans.length()-1)<<endl;

    return 0;
}