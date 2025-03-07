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
    vector<int> a;
    int p = n;
    vector<pair<int, int>> vp;
    multiset<int> ms;
    while (p--)
    {
        int x, y;
        cin >> x >> y;
        vp.push_back({x, y});
        a.push_back(x);
        ms.insert(x);
    }
    sort(all(vp));
    sort(all(a));
    for (int i = 0; i < n - 1; i++)
    {
        int k = lower_bound(all(a), vp[i].second) - a.begin();
        if (ms.find(vp[i].second) == ms.end())
            k--;
        // cout << k << endl;
        sum += (k - i);
    }
    cout << sum << endl;
}
int32_t main()
{
    fast();
    solve();
}