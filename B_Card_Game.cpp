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
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
#define debug(x) cerr << (#x) << " " << (x) << endl
int play(int a, int b)
{
    return a > b;
    if (a == b)
        return 0;
    return -1;
}
void solve()
{
    int sum = 0, flag = 0;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // //debug(play(a, d));
    debug(play(2, 5));
    if ((play(a, c) + play(b, d)) > 0)
        sum += 1;
    // debug(sum);
    if ((play(a, d) + play(b, c)) > 0)
        sum += 1;
    // debug(sum);
    if ((play(b, d) + play(a, c)) > 0)
        sum += 1;
    // debug(sum);
    if ((play(b, c) + play(a, d)) > 0)
        sum += 1;
    // debug(sum);
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
