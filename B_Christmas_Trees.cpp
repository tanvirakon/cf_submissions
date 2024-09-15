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
int32_t main()
{
    fast();
    int sum = 0, flag = 0;
    int a, m, l, r;
    cin >> a >> m >> l >> r;
    int k1 = (l - a) / (m * 1.0);
    int k2 = (r - a) / (m * 1.0);
     debug(k1);
     debug(k2);
    sum = abs(k2 - k1);
     debug(sum);
    if ((a + k1 * m) == l and k1 != k2)
        sum++;
    else if ((a + k2 * m) == r and k1 != k2)
        sum++;
     debug((a + k1 * m));
     debug((a + k2 * m));
    cout << sum << endl;
}
