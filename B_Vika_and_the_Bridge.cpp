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
    int sum = INT_MAX, flag = 0, ans = 0;
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<int, int> mapi;
    map<int, int> mapd;
    map<int, int> mapf;
    vector<vector<int>> v(k);
    f0(n)
    {
        cin >> a[i];
        if (mapi.find(a[i]) != mapi.end())
        {
            int p = i - mapi[a[i]] - 1;
            v[a[i] - 1].push_back(p);
            mapd[a[i]] = p;
            mapi[a[i]] = i;
        }
        else
        {
            mapd[a[i]] = i;
            mapi[a[i]] = i;
            v[a[i] - 1].push_back(i);
        }
    }
    for (int i = 0; i < v.size(); i++)
        v[i].push_back(n - mapi[i + 1] - 1);
    for (int i = 0; i < v.size(); i++)
    {
        sort(all(v[i]));
    }
    vector<int> qq;
    for (int i = 0; i < v.size(); i++)
    {
        int p = max(v[i][v[i].size() - 1] / 2, v[i][v[i].size() - 2]);
        qq.push_back(p);
    }
    sort(all(qq));
    cout << qq[0] << endl;
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