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
    int a[n][m];
    f0(n)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    f0(n)
    {
        for (int j = 0; j < m; j++)
        {
            int mx = 0;
            if (i > 0)
                mx = max(mx, a[i - 1][j]);
            if (i < n - 1)
                mx = max(mx, a[i + 1][j]);
            if (j > 0)
                mx = max(mx, a[i][j - 1]);
            if (j < m - 1)
                mx = max(mx, a[i][j + 1]);
            if (mx != 0 and a[i][j] > mx)
                a[i][j] = mx;
            cout << a[i][j] << " ";
        }
        cout << endl;
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
