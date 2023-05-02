#include <iostream>
using namespace std;
const int N = 1e5;

int arr[N];
int dp[N];

int coins(int n)
{
    if (n == 1)
        return arr[n];

    int result = coins(n - 2) + arr[n];
    dp[n] = result;
    return result;
}

int main()
{
    int t, n;

    cin >> t;

    for (int it = 1; it <= t; it++)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i <= n; i++)
        {
            dp[i] = -1;
        }

        cout << "Case " << it << ": " << coins(n) << endl;
    }

    return 0;
}