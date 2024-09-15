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
    int n;
    cin >> n;
    for (int i = 1; i < 1000000; i++)
    {
        int x = pow(i, 3 * 1.0);
        if (x > n)
            break;
        else
        {
            string s = to_string(x);
            string k = s;
            reverse(all(s));
            if (k == s)
                sum = x;
        }
    }
    cout << sum << endl;
}
