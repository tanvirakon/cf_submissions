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
    int sum = 0, flag = 0, man = 0, cost = 0;
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    f0(n) cin >> a[i];
    f0(n) cin >> b[i];
    vector<pair<int, int>> vp;
    f0(n) vp.push_back({b[i], a[i]});
    sort(all(vp));
    if (k < vp[0].first)
        cout << k * n << endl;
    else
    {
        int visited[n] = {0};
        sum = k;
        int pp = 1;
        f0(n)
        {
            if (pp >= n)
                break;
            cost = vp[i].first;
            man = vp[i].second;
            if (cost < k)
            {
                int j = pp;
                for (; j < pp + man; j++)
                {
                    if (j > n)
                        break;
                    visited[j] = 1;
                }
                pp = j + 1;
                sum += man * cost;
            }
            else
            {
                sum += k * (n - (pp - 1));
                break;
            }
        }
        cout << sum << endl;
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
