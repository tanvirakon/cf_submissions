// C++ program to find the lower bound of a value in a
// vector using std::lower_bound()
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n = 5;

    // Finding lower bound for value 35 in array arr
    cout << lower_bound(arr.begin(), arr.end(), 30) - arr.begin();

    return 0;
}