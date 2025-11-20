// In the name of Allah the most beneficent the most merciful - sūrat l-naml(27:30)
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define yes cout << "YES\n"
#define no cout << "-1\n"
#define nn cout << endl
#define vc vector<int>
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
    int a, b;
    cin >> a >> b;
    int ceilv = floor((a + 1) / 2.0);
    if (a == 1 and b == 1)
    {
        cout << 1 << endl;
        return;
    }
    cout << (ceil(a / (b * 1.0)) * b) << endl;
    no;
}
int32_t main()
{
    fast();
    solve();
}
