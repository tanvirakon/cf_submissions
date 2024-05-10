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
    int sum = 0, flag = 0, ans = 0;
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    f0(n) cin >> a[i];
    f0(n) cin >> b[i];
    f0(n) cin >> c[i];
    vector<pair<int, int>> vp1, vp2, vp3;
    f0(n) vp1.push_back({a[i], i});
    f0(n) vp2.push_back({b[i], i});
    f0(n) vp3.push_back({c[i], i});
    sort(all(vp1));
    sort(all(vp2));
    sort(all(vp3));
    reverse(all(vp1));
    reverse(all(vp2));
    reverse(all(vp3));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (vp1[i].second != vp2[j].second and vp1[i].second != vp3[k].second and vp3[k].second != vp2[j].second)
                {
                    sum = max(sum, (vp1[i].first + vp2[j].first + vp3[k].first));
                }
            }
        }
    }
    cout << sum << endl;
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
