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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b)
        swap(a, b);
    vector<int> x;
    vector<int> y;
    for (int i = a + 1; i < b; i++)
        x.push_back(i % 12);

    for (int i = b + 1; i < (a + 12); i++)
    {
        if (i % 12 == 0)
            y.push_back(12);
        else
            y.push_back(i % 12);
    }
    // for (auto i : y)
    //     cout << i << " ";
    // cout << endl;
    sort(all(x));
    sort(all(y));
    if (((find(all(x), c) != x.end()) and (find(all(x), d) != x.end())) or ((find(all(y), c) != y.end()) and (find(all(y), d) != y.end())))
        NO;
    else
        YES;
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}
