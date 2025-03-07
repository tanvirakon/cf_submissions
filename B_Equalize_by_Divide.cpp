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
    int sum = 0, flag = 0, one = 0;
    int n;
    cin >> n;
    vector<int> a(n);
    vector<pair<int, int>> vp, ans;
    f0(n)
    {
        cin >> a[i];
        vp.push_back({a[i], i + 1});
        if (a[i] == 1)
            one++;
    }
    sort(all(vp));
    if (vp[0].first == vp[n - 1].first)
    {
        cout << 0 << endl;
        return;
    }
    if (one >= 1)
        cout << -1 << endl;
    else
    {
        while (vp[0].first != vp[n - 1].first)
        {
            for (int i = 1; i < n; i++)
            {
                if (vp[i].first != vp[0].first)
                {
                    vp[i].first = ceil(vp[i].first * 1.0 / vp[0].first * 1.0);
                    ans.push_back({vp[i].second, vp[0].second});
                }
            }
            sort(all(vp));
        }

        cout << ans.size() << endl;
        for (auto i : ans)
            cout << i.first << " " << i.second << endl;
        vp.clear();
        ans.clear();
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
