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
    int sum = 0, flag = 0;
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    map<int, int> map;
    f0(n)
    {
        cin >> a[i];
        map[a[i]]++;
    }
    int visited[(2 * n) + 5] = {0};
    for (auto i : map)
    {
        if (visited[i.first] == 0)
        {
            int other = (m - i.first);
            if (other < 1)
                continue;
            visited[other] = 1;
            visited[i.first] = 1;
            if (other == i.first)
                sum += floor(i.second / 2.0);
            else
                sum += min(i.second, map[other]);
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
        solve();
}
