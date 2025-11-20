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
    int sum = 0, flag = 0;
    int n;
    string s1, s2;
    cin >> n >> s1 >> s2;
    if (s1 == s2)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        f0(n)
        {
            if (s1[i] != s2[i] and !flag)
            {
                no;
                return;
            }
            else if (s1[i] == '1')
            {
                sum = i;
                flag = 1;
                break;
            }
        }
        vc b;
        f0(n)
        {
            if (s1[i] == '0' and i > sum)
            {

                s1[i] = '1';
                b.push_back(i);
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s1[i] != s2[i])
            {
                s1[i] = '0';
                b.push_back(i);
            }
        }
        if (s1 == s1)
        {
            cout << b.size() << endl;
            for (auto i : b)
                cout << i << " ";
            nn;
        }
        else
            no;
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
