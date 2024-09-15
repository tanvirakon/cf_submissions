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
// void wrong(int n)
// {
//     int n;
//     cin >> n;
//     int sqrtt = sqrt(n);
//     int k = sqrtt * sqrtt;
//     if (k < n)
//     {
//         int p = k + sqrtt + 1;
//         if (sqrtt & 1)
//         {
//             if (p < n)
//             {
//                 cout << "Case " << i + 1 << ": " << sqrtt + 1 << " " << sqrtt + 1 - (p - n) << endl;
//             }
//             else
//             {
//                 k = k + sqrtt + 1;
//                 debug(k);
//                 debug(p);
//                 cout << "Case " << i + 1 << ": " << (n - (sqrtt * sqrtt)) << " " << sqrtt + 1 << endl;
//             }
//         }
//         else
//         {
//             if (p < n)
//             {
//                 int pp = (sqrtt + 1) * (sqrtt + 1);
//                 cout << "Case " << i + 1 << ": " << 1 + (pp - n) << " " << sqrtt + 1 << endl;
//             }
//             else
//                 cout << "Case " << i + 1 << ": " << sqrtt + 1 << " " << sqrtt + 1 - (p - n) << endl;
//         }
//     }
//     else
//     {
//         if (k & 1)
//             cout << "Case " << i + 1 << ": " << 1 << " " << sqrtt << endl;
//         else
//             cout << "Case " << i + 1 << ": " << sqrtt << " " << 1 << endl;
//     }
// }
// void ac(int n)
// {
//     int n;
//     cin >> n;
//     if (n == 1)
//         cout << "Case " << i << ": " << 1 << " " << 1 << endl;
//     if (n > 1)
//     {
//         int ro = ceil(sqrt(n));
//         int firstRoNum = ((ro - 1) * (ro - 1)) + 1;
//         int willGoTill = firstRoNum + (ro - 1);
//         // debug(willGoTill);
//         // debug(firstRoNum);
//         // debug(ro);
//         if (ro & 1)
//         {
//             if (n > willGoTill)
//             {
//                 // row same =ro
//                 int col = 1 + ((ro * ro) - n);
//                 cout << "Case " << i << ": " << col << " " << ro << endl;
//             }
//             else
//             {
//                 // col same = ro
//                 int row = ro - (willGoTill - n);
//                 cout << "Case " << i << ": " << ro << " " << row << endl;
//             }
//         }
//         else
//         {
//             if (n > willGoTill)
//             {
//                 // col same
//                 int row = ((ro * ro) - n) + 1;
//                 cout << "Case " << i << ": " << ro << " " << row << endl;
//             }
//             else
//             {
//                 // row same = ro
//                 int col = 1 + (n - firstRoNum);
//                 cout << "Case " << i << ": " << col << " " << ro << endl;
//             }
//         }
//     }
// }
int32_t main()
{

    srand(time(NULL));
    int t = 10;
    for (int i = 1; i <= t; i++)
    {
        int k = ceil(rand() % 10);
        debug(k);
    }
}
