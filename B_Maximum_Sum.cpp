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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    f0(n) cin >> a[i];
    sort(all(a));
    vector<int> b;
    f1(n) a[i] += a[i - 1];
    k = n - k - 1;
    flag = a[k];
    int j = 1;
    for (int i = k + 1; i < n; i++)
    {
        flag = max(flag, a[i] - a[j]);
        j += 2;
    }
    cout << flag << endl;
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