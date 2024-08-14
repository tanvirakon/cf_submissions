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
    int sum = 0, flag = 0, sum1 = 0, flag1 = 0;
    int n;
    cin >> n;
    vector<int> a(n), b;
    f0(n) cin >> a[i];
    b = a;
    reverse(all(b));
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[0])
        {
            flag = i;
            break;
        }
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] != a[0])
        {
            sum = i;
            break;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (b[i] != b[0])
        {
            flag1 = i;
            break;
        }
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (b[i] != b[0])
        {
            sum1 = i;
            break;
        }
    }
    if (sum == flag and sum == 0)
        cout << 0 << endl;
    else
    {
        cout << min(sum - flag + 1, sum1 - flag1 + 1) << endl;
    }
    // debug(sum);
    // debug(flag);
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}
