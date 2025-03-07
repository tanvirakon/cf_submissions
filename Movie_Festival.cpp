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
bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second <= b.second;
    return a.first < b.first;
}
void solve()
{
    int sum = 0, flag = 0;
    int n;
    cin >> n;
    vector<pair<int, int>> vp;
    f0(n)
    {
        int a, b;
        cin >> a >> b;
        vp.push_back({a, b});
    }
    sort(all(vp), comp);
    vector<int> a;
    for (auto i : vp)
        a.push_back(i.first);
    // cout << a.size() << " " << vp.size() << endl;
    for (int i = 0; i < n; i++)
    {
        sum = 1;
        int k = lower_bound(all(a), vp[i].second) - a.begin();
        debug(k);
        sum += (n - k);
        debug(sum);
        flag = max(flag, sum);
    }
    cout << flag << endl;
}
int32_t main()
{
    fast();
    solve();
}
