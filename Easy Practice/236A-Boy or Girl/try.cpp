#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    unordered_map<char,int> freq;
    int noUnique  = 0;
    for(auto ch:s)
    {
        if(freq.find(ch)==freq.end()) noUnique++;

        freq[ch]++;
    }

    cout<< ((noUnique&1)?"IGNORE HIM!":"CHAT WITH HER!")<<endl;

    return 0;
}