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
    vector<int> a[n];
    f0(n)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            a[i].push_back(x);
        }
    }

    for (int i = 0; i < m; i++)
    {
        vector<int> v, tmp;
        for (int j = 0; j < n; j++)
            v.push_back(a[j][i]);
        sort(all(v));
        tmp = v;
        for (int k = 1; k < n; k++)
            v[k] += v[k - 1];
        for (int k = 0; k < n; k++)
            sum += ((v[n - 1] - v[k]) - (tmp[k] * (n - k - 1)));
    }
    cout << sum << endl;
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}