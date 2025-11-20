// In the name of Allah the most beneficent the most merciful - sūrat l-naml(27:30)
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define yes cout << "YES\n"
#define no cout << "-1\n"
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
    int sum = 0, flag = 0, zero = 0, one = 0, two = 0;
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    f0(n)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] == 0)
            zero++;
        else if (a[i] == 1)
            one++;
        else
            two++;
    }
    if (sum == k)
        no;
    else if (sum > k)
    {
        for (auto i : a)
            cout << i << " ";
        cout << endl;
    }
    else
    {
        int d = abs(sum - k);
        if (d != 1)
            no;
        else
        {
            for (int i = 0; i < zero; i++)
                cout << 0 << " ";
            for (int i = 0; i < two; i++)
                cout << 2 << " ";
            for (int i = 0; i < one; i++)
                cout << 1 << " ";
            cout << endl;
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
