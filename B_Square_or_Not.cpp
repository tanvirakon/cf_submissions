// In the name of Allah the most beneficent the most merciful - sūrat l-naml(27:30)
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define nn 1e7 + 5
#define ff first
#define ss second
#define YES cout << "Yes\n"
#define NO cout << "No\n"
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
    string s;
    cin >> s;
    int k = floor(sqrt(n));
    if (k * k != n)
    {
        NO;
        return;
    }
    int i = k;
    int d = k;
    k -= 2;
    int p = k;
    while (k > 0)
    {
        // debug(i);
        // debug(i + p + 1);
        if (s[i] != '1' and s[i + p + 1] != '1')
        {
            flag = 1;
            break;
        }
        i++;
        k--;
    }
    if (flag)
    {
        NO;
        return;
    }
    else
    {
        // debug(flag);
        flag = 0;
        i = floor(sqrt(n)) + 1; // 4
        k = floor(sqrt(n)) - 2; // 1
        int kk = k;             // 1
        // debug(i);
        // debug(k);
        // debug(kk);
        while (k > 0)
        {
            int ppp = i;
            for (int j = i; j <= (ppp + k - 1); j++)
            {
                if (s[j] != '0')
                {
                    flag = 1;
                    break;
                }
            }
            k--;
            if (flag)
            {
                NO;
                return;
            }
        }
        YES;
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
