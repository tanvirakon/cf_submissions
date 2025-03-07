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
    int two = 0, three = 0, five = 0, four = 0;
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    f0(n)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            two++;
        // 2,3,4,5 diye divede jay kina check krlm. cz egula tklei oi k dia direct devide
        if (a[i] % 3 == 0)
            three = 1;
        if (a[i] % 4 == 0)
            four = 1;
        if (a[i] % 5 == 0)
            five = 1;
    }
    if ((k == 2 and two) or (k == 3 and three) or (k == 4 and four) or (k == 5 and five))
        cout << 0 << endl;
    else
    {
        if (k == 4)
        {
            vector<int> b;
            f0(n)
            {
                int pp = ceil(a[i] / (k * 1.0));
                b.push_back((k * pp) - a[i]);
            }
            sort(all(b));
            if (two >= 2)
                // already 2ta even number ase. cz 4 = 2 * 2. hence 0
                cout << 0 << endl;
            else if (two == 1)
            {
                // already 1ta ase. i just need another
                int pp = 1;
                cout << pp << endl;
            }
            else if (two == 0)
            // shb odd. so 2ta case hoite pare. 2ta number re even banmu -> cost 2. or say 3 ase. ore just 4 banailei enough -> cost 1
            {
                int pp = 2;
                cout << min(b[0], pp) << endl;
            }
        }
        else
        {
            // jdi na thake then 1ta devide by k paite kto cost
            // redundent use. k==4 r agei leka jay eta
            vector<int> b;
            f0(n)
            {
                int pp = ceil(a[i] / (k * 1.0));
                b.push_back((k * pp) - a[i]);
            }
            sort(all(b));
            cout << b[0] << endl;
            b.clear();
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
