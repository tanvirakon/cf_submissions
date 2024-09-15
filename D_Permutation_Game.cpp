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
int findMax(vector<int> p, vector<int> a, int n, int k, int pos)
{
    int sum = 0, flag = 0;
    vector<int> vis(n, 0);
    for (int i = k; i > 0; i--)
    {
        if (vis[pos - 1] == 1)
            break;
        vis[pos - 1] = 1;
        sum = max(sum, (i * a[pos - 1]) + flag);
        flag += a[pos - 1];
        pos = p[pos - 1];
    }
    return sum;
}
void solve()
{
    int sum = 0, flag = 0;
    int n, k, pb, ps;
    cin >> n >> k >> pb >> ps;
    vector<int> p(n), a(n);
    f0(n) cin >> p[i];
    f0(n) cin >> a[i];

    int sum1 = findMax(p, a, n, k, pb);
    int sum2 = findMax(p, a, n, k, ps);
    
    if (sum1 < sum2)
        cout << "Sasha\n";
    else if (sum1 > sum2)
        cout << "Bodya\n";
    else
        cout << "Draw\n";
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}
