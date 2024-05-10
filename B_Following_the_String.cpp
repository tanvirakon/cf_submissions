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
int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0, flag = 0;
        int n;
        cin >> n;
        vector<int> a(n);
        f0(n) cin >> a[i];
        vector<pair<int, char>> vp;
        f0(26)
        {
            vp.push_back({0, char(97 + i)});
        }
        vector<char> v;
        for (auto i : a)
        {
            pair<int, char> pp = {i, 'a'};
            int p = lower_bound(all(vp), pp) - vp.begin();
            v.push_back(vp[p].second);
            vp[p].first++;
            sort(all(vp));
        }
        for (auto i : v)
            cout << i;
        cout << endl;
    }
}
