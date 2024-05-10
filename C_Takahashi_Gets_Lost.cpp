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
int32_t main()
{
    fast();
    int sum = 0, flag = 0;
    int h, w, n;
    cin >> h >> w >> n;
    string s;
    cin >> s;
    vector<string> a(h);
    f0(h) cin >> a[i];
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            flag = 0;
            if (a[i][j] == '.')
            {
                int q1 = i, q2 = j;
                for (int k = 0; k < n; k++)
                {
                    if (s[k] == 'L')
                    {
                        j--;
                        flag = 0;
                    }
                    else if (s[k] == 'U')
                    {
                        i--;
                        flag = 0;
                    }
                    else if (s[k] == 'D')
                    {
                        i++;
                        flag = 0;
                    }
                    else if (s[k] == 'R')
                    {
                        j++;
                        flag = 0;
                    }
                    if (a[i][j] == '#')
                    {
                        flag = 1;
                        break;
                    }
                }
                if (!flag)
                {
                    sum++;
                }
                i = q1;
                j = q2;
            }
        }
    }
    cout << sum << endl;
}
