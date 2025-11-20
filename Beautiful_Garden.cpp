// In the name of Allah the most beneficent the most merciful - sūrat l-naml(27:30)
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nn cout << endl
#define vc vector<int>
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
    int n, k, d;
    cin >> n >> k >> d;
    vc a(n);
    f0(n) cin >> a[i];
    sort(all(a));
    if (k >= n)
        cout << 0 << endl;
    else
    {
        sum += (n - k);
        f0(n - k)
        {
            flag = floor(d / a[i]);
            if (a[i] * flag == d)
                flag--;
            // debug(flag);
            sum += flag;
        }
        cout << sum << endl;
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
