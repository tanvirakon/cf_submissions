// In the name of Allah the most beneficent the most merciful - sūrat l-naml(27:30)
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define nn 1000000007
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
int32_t main()
{
    fast();
    int sum = 0, flag = 0;
    int n;
    cin >> n;
    vector<int> a(n);
    f0(n) cin >> a[i];

    int m;
    cin >> m;
    vector<int> b(m);
    f0(m) cin >> b[i];

    int l;
    cin >> l;
    vector<int> c(l);
    f0(l) cin >> c[i];

    int q;
    cin >> q;
    vector<int> d(q);
    f0(q) cin >> d[i];

    unordered_set<int> set;

    for (auto i : a)
    {
        for (auto j : b)
        {
            for (auto k : c)
            {
                sum = (i + j + k);
                set.insert(sum);
            }
        }
    }

    for (auto i : d)
    {
        if (set.find(i) != set.end())
            YES;
        else
            NO;
    }
}
