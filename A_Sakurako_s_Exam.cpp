// In the name of Allah the most beneficent the most merciful - sūrat l-naml(27:30)
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define nn 1e7 + 5
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define f0(n) for (int i = 0; i < n; i++)
#define f1(n) for (int i = 1; i < n; i++)
#define all(_a) _a.begin(), _a.end()
#define debug(x) cerr << (#x) << " " << (x) << endl
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
void solve()
{
    int sum = 0, flag = 0;
    int a, b;
    cin >> a >> b;
    sum = a + (b * 2);
    if (a == 0)
    {
        if (b & 1)
            NO;
        else
            YES;
    }
    else if (b == 0)
    {
        if (a & 1)
            NO;
        else
            YES;
    }
    else
    {
        if (sum & 1)
            NO;
        else
            YES;
    }
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}
