// In the name of Allah the most beneficent the most merciful - sūrat l-naml(27:30)
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define nn 1000000007
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
    int sum = 0, flag = 1;
    int q;
    cin >> q;
    vector<pair<pair<int, int>, int>> vp;
    for (int i = 0; i < q; i++)
    {
        string s;
        cin >> s;
        if (i == 0)
            NO;
        else
        {
            if (s[0] == '+')
            {
                if (flag)
                    YES;
            }
        }
    }
}
int32_t main()
{
    fast();
    solve();
}
