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
    int sum = 0, flag = 0, ans = 0;
    int n;
    cin >> n;
    vector<int> a(n);
    f0(n)
    {
        cin >> a[i];
    }
    int la = 0, ra = n - 1;
    int lb = 1, rb = n;
    while (la < ra)
    {
        flag = 0;
        if (a[la] == lb)
        {
            la++;
            lb++;
            flag = 1;
        }
        if (a[la] == rb)
        {
            la++;
            rb--;
            flag = 1;
        }
        if (a[ra] == lb)
        {
            flag = 1;
            ra--;
            lb++;
        }
        if (a[ra] == rb)
        {
            flag = 1;
            ra--;
            rb--;
        }
        if (flag == 0)
        {
            cout << ++la << " " << ++ra << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
