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
    string p, s;
    cin >> p >> s;
    vector<char> a, b;
    int n = p.size();
    f1(p.size())
    {

        if (p[i] == p[i - 1])
            continue;
        else
        {
            a.push_back(p[i - 1]);
            flag = 1;
        }
    }
    if (!flag)
        a.push_back(p[0]);
    if (p[n - 1] != a[a.size() - 1])
        a.push_back(p[n - 1]);
    // for (auto i : a)
    //     cout << i << " ";
    // cout << endl;

    flag = 0;
    n = s.size();
    f1(s.size())
    {
        if (s[i] == s[i - 1])
            continue;
        else
        {
            b.push_back(s[i - 1]);
            flag = 1;
        }
    }
    if (!flag)
        b.push_back(s[0]);
    if (s[n - 1] != b[b.size() - 1])
        b.push_back(s[n - 1]);
    // for (auto i : b)
    //     cout << i << " ";
    if (a.size() != b.size())
    {
        NO;
        return;
    }
    flag = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        NO;
        return;
    }

    vector<int> v1, v2;
    n = p.size();
    flag = 0;
    int j = 0;
    f1(p.size())
    {
        if (p[i] == p[i - 1])
            continue;
        else
        {
            flag = 1;
            v1.push_back(i - j);
            j = i;
        }
    }
    if (!flag)
        v1.push_back(n);
    v1.push_back(n - j);
    // for (auto i : v1)
    //     cout << i << " ";
    // cout << endl;
    flag = 0;
    n = s.size();
    j = 0;
    f1(s.size())
    {
        if (s[i] == s[i - 1])
            continue;
        else
        {
            flag = 1;
            v2.push_back(i - j);
            j = i;
        }
    }
    if (!flag)
        v2.push_back(n);
    v2.push_back(n - j);
    // for (auto i : v2)
    //     cout << i << " ";

    flag = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        if (v2[i] >= v1[i] and v2[i] <= (2 * v1[i]))
            continue;
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag)
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
