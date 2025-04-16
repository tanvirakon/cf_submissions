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
    int n, x;
    cin >> n >> x;
    if (n == 1)
        cout << x << endl;
    else
    {
        vector<int> a;
        f0(n)
        {
            if ((i | x) == x)
                a.push_back(i);
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            for (int i = a.size(); i < n; i++)
                a.push_back(x);
        }
        else
        {
            if (__builtin_clzl(x) != __builtin_clzl(a[a.size() - 1]))
                a[a.size() - 1] = x;
        }
        for (auto i : a)
            cout << i << " ";
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
