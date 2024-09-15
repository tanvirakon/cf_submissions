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
    string a, b;
    cin >> a;
    vector<int> v(m);
    f0(m) cin >> v[i];
    cin >> b;
    sort(all(b));
    sort(all(v));
    // auto it = unique(all(v));
    // v.resize(distance(v.begin(), it));
    set<int> set;
    f0(m) set.insert(v[i]);
    v.clear();
    for (auto i : set)
        v.push_back(i);
    string k = "";
    int j = 0;
    f0(n)
    {
        if (i == v[j] - 1)
        {
            k += b[j];
            j++;
        }
        else
            k += a[i];
    }
    cout << k << endl;
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}