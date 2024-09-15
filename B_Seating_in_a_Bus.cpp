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
    int n;
    cin >> n;
    vector<int> a(n), b(n, 0);
    f0(n)
    {
        cin >> a[i];
        if (i == 0)
            b[a[i] - 1] = 1;
        else
        {
            if ((a[i] < n and b[a[i]] == 1) or (a[i] > 1 and b[a[i] - 2] == 1))
            {
                b[a[i] - 1] = 1;
            }
            else
            {
                flag = 1;
                // break;
                // cin>>a[i] ase..break krle to cin hbe na...so break dea jbe na
            }
        }
    }
    if (flag)
        NO;
    else
        YES;
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}
