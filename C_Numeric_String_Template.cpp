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

    int n;
    cin >> n;
    vector<int> a(n);
    f0(n) cin >> a[i];
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;

        if (s.length() != n)
            NO;
        else
        {
            vector<pair<int, int>> vp;
            f0(n) vp.push_back({a[i], s[i]});
            sort(all(vp));
            int sum = 0, flag = 0;
            f1(n)
            {
                if (vp[i].first == vp[i - 1].first)
                {
                    if (vp[i].second != vp[i - 1].second)
                    {
                        flag = 1;
                        // debug(i);
                        // debug(vp[i].second);
                        break;
                    }
                }
            }
            if (flag)
                NO;
            else
            {
                // if (q == 2)
                // {
                //     for (auto i : vp)
                //         cout << i.first << " " << i.second << endl;
                // }

                vector<pair<int, int>> vp2;
                for (auto i : vp)
                    vp2.push_back({i.second, i.first});
                sort(all(vp2));
                f1(n)
                {
                    if (vp2[i].first == vp2[i - 1].first)
                    {
                        if (vp2[i].second != vp2[i - 1].second)
                        {
                            flag = 1;
                            break;
                        }
                    }
                }
                if (flag)
                    NO;
                else
                    YES;
                vp2.clear();
                vp.clear();
            }
        }
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
