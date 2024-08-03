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
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(k), b(k);
    f0(k) cin >> a[i];
    f0(k) cin >> b[i];
    f0(q)
    {
        int x;
        cin >> x;
        int index = lower_bound(all(a), x) - a.begin();
        if (!index)
        {
            sum = ((b[0] * x) / a[0]);
            cout << sum << " ";
        }
        else
        {
            int des = a[index] - a[index - 1];
            int time = b[index] - b[index - 1];
            int leftdistance = x - a[index - 1];
            int ans = (leftdistance * time) / des;
            sum = (b[index - 1] + ans);
            cout << sum << " ";
        }
    }
    cout << endl;
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}
