// In the name of Allah the most beneficent the most merciful - sūrat l-naml(27:30)
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define nn 1e7 + 9
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
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0, flag = 0;
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        f0(n) cin >> a[i];
        sort(all(a));
        long long lo = 0, hi = 1e18;
        while (lo < hi)
        {
            long long tot = 0;
            long long mid = lo + (hi - lo + 1) / 2;
            for (int i = 0; i < n; i++)
                tot += max(mid - a[i], 0LL);
            if (tot <= x)
                lo = mid;
            else if (tot > x)
                hi = mid - 1;
        }
        cout << lo << endl;
    }
}
