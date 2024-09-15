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
    vector<int> a(n);
    f0(n) cin >> a[i];
    vector<pair<int, int>> vp, vp2;
    f0(n) vp.push_back({a[i], i});
    sort(all(vp));
    sort(all(a));
    f1(n) a[i] += a[i - 1];
    vector<int> ans;
    f1(n)
    {
        if (vp[i].first > a[i - 1])
        {
            vp[i - 1].first = i - 1;
        }
    }
    if (vp[n - 1].first <= a[n - 2])
        vp[n - 2].first = n - 1;

    vp[n - 1].first = n - 1;
    for (int i = n - 1; i > 0; i--)
    {
        if (vp[i].first < vp[i - 1].first)
            vp[i - 1].first = vp[i].first;
    }
    for (auto i : vp)
        vp2.push_back({i.second, i.first});
    sort(all(vp2));
    for (auto i : vp2)
        cout << i.second << " ";
    cout << endl;
    a.clear();
    vp.clear();
    vp2.clear();
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}
