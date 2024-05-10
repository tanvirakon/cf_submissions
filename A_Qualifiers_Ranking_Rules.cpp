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
    int n, m;
    cin >> n >> m;
    vector<string> a(n), b(m);
    map<string, int> mapa, mapb;
    vector<string> c, d;
    f0(n)
    {
        cin >> a[i];
        mapa[a[i]]++;
        if (mapa[a[i]] == 1)
            c.push_back(a[i]);
    }
    f0(m)
    {
        cin >> b[i];
        mapb[b[i]]++;
        if (mapb[b[i]] == 1)
            d.push_back(b[i]);
    }
    vector<string> ans;
    map<string, int> map;
    f0(min(c.size(), d.size()))
    {
        map[c[i]]++;
        if (map[c[i]] == 1)
            ans.push_back(c[i]);
        map[d[i]]++;
        if (map[d[i]] == 1)
            ans.push_back(d[i]);
    }
    if (c.size() > d.size())
    {
        for (int i = min(c.size(), d.size()); i < c.size(); i++)
        {
            map[c[i]]++;
            if (map[c[i]] == 1)
                ans.push_back(c[i]);
        }
    }
    else
    {
        for (int i = min(c.size(), d.size()); i < d.size(); i++)
        {
            map[d[i]]++;
            if (map[d[i]] == 1)
                ans.push_back(d[i]);
        }
    }
    for (auto i : ans)
        cout << i << endl;
}
int32_t main()
{
    fast();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
}
