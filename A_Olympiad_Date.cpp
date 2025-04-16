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
    string s = "01032025";
    int a[6] = {0};
    for (auto i : s)
    {
        int k = i - '0';
        a[k]++;
    }
    for (auto i : a)
        cout << i << " ";
    cout << endl;
    int n;
    cin >> n;
    vector<int> v(n);
    f0(n) cin >> v[i];
    f0(n)
    {
        if (v[i] <= 5)
            a[v[i] - 1]--;
            for(auto j:a){
                if(j>)
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
