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
bool check(vector<int> a, int n, int mid, int k)
{
    int sum = 0, flag = 0;
    f0(n) sum += max(flag, mid - a[i]);
    if (sum > k)
        return false;
    else
    {
        debug(sum);
        debug(mid);
        return true;
    }
}
void solve()
{
    int sum = 0, flag = 0;
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    f0(n) cin >> a[i];
    int l0 = 0, hi = 100;
    while (l0 < hi)
    {
        // int mid = l0 + ((hi - l0) / 2);
        int mid = (l0 + hi + 1) / 2;
        if (check(a, n, mid, k))
            l0 = mid;
        else
            hi = mid - 1;
    }
    debug(l0);
    sum = n * (l0 - 1) + 1;
    cout << "sum " << sum << endl;
    f0(n)
    {
        if (a[i] > l0)
            sum++;
        else
            k -= (l0 - a[i]);
    }
    cout << sum + k << endl;
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}
