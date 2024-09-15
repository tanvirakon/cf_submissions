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
    string s;
    cin >> s;
    map<char, int> map2;
    multimap<char, int> map;
    int n = s.size();
    // f0(n) map[s[i]] = i + 1;
    f0(n)
    {
        map.insert({s[i], i + 1});
        map2[s[i]] = (int)s[i];
    };
    // for (auto [x, y] : map2)
    //     cout << x << " " << y << endl;
    int k = 0;
    vector<int> a;
    vector<char> b;
    if (s[0] > s[n - 1])
    {
        k = n - 1;
        for (auto [i, j] : map)
        {
            if (i == s[k] and flag == 0)
            {
                flag = 1;
            }
            if (flag)
            {
                a.push_back(j);
                b.push_back(i);
            }
            if (j == 1)
                break;

            // cout << i << " " << j << endl;
        }
        reverse(all(a));
        f1(b.size()) sum += (abs(map2[b[i]] - map2[b[i - 1]]));
        cout << sum << " " << a.size() << endl;
        for (auto i : a)
            cout << i << " ";
        cout << endl;
        return;
    }
    for (auto [i, j] : map)
    {
        if (i == s[k] and flag == 0)
        {
            flag = 1;
        }
        if (flag)
        {
            a.push_back(j);
            b.push_back(i);
        }
        if (j == n)
            break;
    }
    sum = 0;
    f1(b.size()) sum += (abs(map2[b[i]] - map2[b[i - 1]]));
    // for (auto i : b)
    //     cout << i << " ";
    // cout << endl;
    cout << sum << " " << a.size() << endl;
    for (auto i : a)
        cout << i << " ";
    cout << endl;
}
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}
