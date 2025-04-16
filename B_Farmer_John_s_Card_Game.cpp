// In the name of Allah the most beneficent the most merciful - sūrat l-naml(27:30)
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define nn 1000000007
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "-1\n"
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
    flag = n;
    int v[n][m];
    int j = 0;
    while (flag--)
    {
        vector<int> a(m);
        f0(m) cin >> a[i];
        sort(all(a));
        for (int i = 0; i < m; i++)
            v[j][i] = a[i];
        j++;
    }
    j = 0;
    vector<pair<int, int>> vp;
    f0(n) vp.push_back({v[i][0], i});
    sort(all(vp));
    int k = 0;
    int p = 0;
    for (int i = 0; i < ((n * m) - 1); i++)
    {
        if (i == v[vp[k].second][p])
            k++;
        else
        {
            sum = 1;
            break;
        }
        if (((i + 1) % n) == 0)
        {
            k = 0;
            p++;
        }
    }
    if (sum)
        NO;
    else
    {
        for (auto i : vp)
            cout << (i.second + 1) << " ";
        cout << endl;
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
