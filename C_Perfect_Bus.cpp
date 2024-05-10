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
int ac(vector<int> a)
{
    int sum = 0, flag = 0;
    int n = a.size();
    f0(n)
    {
        sum += a[i];
        if (sum < 0)
            sum = 0;
    }
    int k = 0;
    return max(sum, k);
}
int notac(vector<int> a)
{
    int sum = 0, flag = 0;
    int n = a.size();
    f0(n)
    {
        if (a[i] < 0 and !flag)
        {
            sum = 0;
            if ((i + 1) < n and a[i + 1] > 0)
                flag = 1;
        }
        else
            sum += a[i];
    }
    int k = 0;
    return max(sum, k);
}
int32_t main()
{
    fast();
    int x = 0;
    while (x <= 10000)
    {
        x++;
        srand(time(0));
        int n = rand() % 100 + 1;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            if (rand() % 3 == 0)
                a.push_back((rand() % 10 + 1) * -1);
            else
                a.push_back(rand() % 10 + 1);
        }
        if (ac(a) != notac(a))
        {
            cout << "ac " << ac(a) << endl;
            cout << "notac " << notac(a) << endl;
            cout << n << endl;
            for (auto i : a)
                cout << i << " ";
            break;
        }
    }
}
