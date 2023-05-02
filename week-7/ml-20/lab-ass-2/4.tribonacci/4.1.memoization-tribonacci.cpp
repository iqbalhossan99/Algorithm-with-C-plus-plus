#include <iostream>
using namespace std;
const int N = 1e5;

int dp[N];

int tribo(int n)
{
    if (n <= 2 && n != 0)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    int ans1 = tribo(n - 1);
    int ans2 = tribo(n - 2);
    int ans3 = tribo(n - 3);

    dp[n] = ans1 + ans2 + ans3;

    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        dp[i] = -1;
    }

    cout << tribo(n);
    return 0;
}