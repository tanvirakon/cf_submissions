// In the name of Allah the most beneficent the most merciful - sūrat l-naml(27:30)
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
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
    int sum = 0, flag = 0, ans = 0, flag2 = 0, flag3 = 0;
    int n;
    string s;
    cin >> n >> s;
    f0(n)
    {
        if (s[i] == '1')
        {
            flag3 = 1;
        }
        else if (s[i] == '0')
        {
            while (i < n)
            {
                if (s[i] == '0')
                    sum++;
                else
                {
                    i--;
                    break;
                }
                i++;
            }
            // debug(i);
            // debug(sum);
            // if (i == n)
            //     i = n;
            flag2 = 1;
        }
        else
        {
            // debug(sum);
            if (sum >= flag and flag2)
            {
                flag = sum;
                ans = i;
            }
            sum = 0;
        }
    }
    if (!flag3)
        cout << n << endl;
    // debug(ans);
    sum = 1;
    flag = 0;
    if (ans > 0)
    {
        for (int i = ans - 1; i > 0; i--)
        {
            if (s[i] == s[i - 1])
                sum++;
            else
            {
                sum += 2;
            }
        }
        for (int i = ans; i < n - 1; i++)
        {
            if (i == ans)
            {
                if (s[i] == s[0])
                    sum++;
                else
                    sum += 2;
            }
            else if (s[i] == s[i + 1])
                sum++;
            else
                sum += 2;
        }
        sum++;
        cout << sum << endl;
    }
    else
        cout << n + 1 << endl;
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}
