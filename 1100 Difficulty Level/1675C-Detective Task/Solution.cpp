#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

//-----------------------------------------MACROS---------------------------------------------------------------//
#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef stack<ll> stll;
typedef stack<char> stch;
typedef stack<string> ststr;
 
double EPS = 1e-9;
long long MOD = 1000000007;
int INF = 1000000005;
long long INFF = 1000000000000000005LL;
double PI = acos(-1);
int dirx[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };
int diry[8] = { 0, 1, -1, 0, -1, 1, -1, 1 };
 
#ifdef TESTING
#define DEBUG fprintf(stderr, "====TESTING====\n")
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl
#define debug(...) fprintf(stderr, __VA_ARGS__)
#else
#define DEBUG
#define VALUE(x)
#define debug(...)
#endif
 
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))
#define REP(i, n) FOR(i, 0, n)
#define REPN(i, n) FORN(i, 1, n)
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define SQR(x) ((ll)(x) * (x))
#define RESET(a, b) memset(a, b, sizeof(a))
#define fi first
#define se second
#define mpair make_pair
#define len(ds) ds.size()
#define pb emplace_back
#define ALL(v) v.begin(), v.end()
#define itrALL(c,itr) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
#define arlen(a) sizeof(a)/sizeof(a[0]) //length of static array

#define ALLA(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
#define PERMUTE next_permutation
#define TC(t) while (t--)
#define ret return
#define print(a) cout<<a<<"\n"
#define arprint(a,l,r) for(int J=l; J<=r; J++) cout<<a[J]<<" "; cout<<"\n";
#define stprint(st) while(!st.empty()) {print(st.top()); st.pop();}
#define qprint(q) while(!q.empty()) {print(q.front()); q.pop();}


template<typename T> void scan(T &x)
{
    x = 0;
    bool neg = 0;
    register T c = getchar();
 
    if (c == '-')
        neg = 1, c = getchar();
 
    while ((c < 48) || (c > 57))
        c = getchar();
 
    for ( ; c < 48||c > 57 ; c = getchar());
 
    for ( ; c > 47 && c < 58; c = getchar() )
        x= (x << 3) + ( x << 1 ) + ( c & 15 );
 
    if (neg) x *= -1;
}
 
template<typename T> void printn(T n)
{
    bool neg = 0;
 
    if (n < 0)
        n *= -1, neg = 1;
 
    char snum[65];
    int i = 0;
    do
    {
        snum[i++] = n % 10 + '0';
        n /= 10;
    }
 
    while (n);
    --i;
 
    if (neg)
        putchar('-');
 
    while (i >= 0)
        putchar(snum[i--]);
 
    putchar('\n');
}


//-------------------------------------------END OF MACROS-----------------------------------------------------------//


//NOTES:-
//The thief can always stay between the rightmost one and the leftmost zero...
//that's because the rightmost 1 indicates last when the painting was seen
//and the leftmost 0 indicates the moment the painting has gone missing.
//Now even if one of these or even both of these indexes are lying,
//they can be thieves too, so inclusive of these both indexes (of rightmost one and leftmost zero)
//our final answer for all possibilities of the thief would be = (index of leftmost zero) - (index of rightmost one ) +1

//For handling edge case when no 0 occurs, we assume the first zero is at the last index of the array,
//because all the people after the last occurence of 1 could lie (thief)...
//For handling edge case when no 1 occurs, all people from starting(0) to the first/leftmost zero could be lying..
//If both 0 and 1 don't occur that means all of them might be lying... 

void solve()
{
    string s; 
    cin>>s;
    bool zero =false, one = false;
    ll leftmostZero = s.size()-1, rightmostOne = 0;
    for(int i = 0; i<s.size();i++)
    {
        if(!zero) if(s[i]=='0') {leftmostZero = i;zero=true;}
        if(s[i]=='1') {rightmostOne = i;}

    }

    cout<< leftmostZero - rightmostOne +1 <<endl;
}

int32_t main()
{
    //ios;
    ll t;
    scan(t);
    TC(t)
        solve();
    ret 0;
}