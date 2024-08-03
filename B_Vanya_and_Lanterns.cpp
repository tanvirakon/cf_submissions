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
    int n, l;
    cin >> n >> l;
    vector<int> a(n);
    f0(n) cin >> a[i];
    sort(all(a));
    double sum = (a[0] - 0) * 1.0;
    f1(n) sum = max(sum, ((a[i] - a[i - 1]) * 1.0) / 2);
    if (!sum)
        sum = l;
    cout << sum << endl;
}
int32_t main()
{
    fast();

    solve();
}