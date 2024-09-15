// In the name of Allah the most beneficent the most merciful - sūrat l-naml(27:30)
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define nn 1000000007
#define ff first
#define ss second
#define YES cout << "S\n"
#define NO cout << "N\n"
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
    vector<int> a(n);
    f0(n) cin >> a[i];
    sort(all(a));
    if (n == 1)
    {
        NO;
        return;
    }

    map<int, int> map;
    f0(n)
    {
        map[a[i]]++;
    }
    for (auto [x, y] : map)
    {
        if (y >= 2)
        {
            YES;
            return;
        }
    }
    
    for (int i = 0, j = n - 1; i < n, i < j; i++, j--)
    {
        int k = abs(a[i] - a[j]);
        int p = lower_bound(all(a), k) - a.begin();
        debug(p);
        if ((p != n) and (p != i and p != j))
        {
            YES;
            return;
        }
    }
    NO;
}
int32_t main()
{
    fast();
    solve();
}
