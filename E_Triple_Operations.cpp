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
vector<int> vv(3e5, 0);
vector<int> vv2(3e5, 0);
void solve()
{
    int sum = 0, flag = 0;
    int a, b;
    cin >> a >> b;
    vector<int> v;
    if (a == 1)
        sum = vv2[b];
    else
        sum = (vv2[b] - vv2[a - 1]);
    sum += vv[a];
    cout << sum << endl;
}
int32_t main()
{
    fast();
    vv[1] = 1;
    vv[2] = 1;
    vv[3] = 2;
    for (int i = 4; i < 3e5; i++)
    {
        int k = i / 3;
        vv[i] = 1 + vv[k];
    }
    f1(3e5) vv2[i] = vv2[i - 1] + vv[i];
    int t;
    cin >> t;
    while (t--)
        solve();
}