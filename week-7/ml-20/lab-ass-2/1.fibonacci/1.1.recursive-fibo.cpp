#include <iostream>
using namespace std;
const int N = 101;

/*

- fib(n) -> calculates the nth fibonacci number
- fib(n) = fib(n-1) + fib(n-2)
- fib(1) = 1, fib(2) = 1

*/

long long dp[N]; // dp array

long long fib(int n)
{
    // 1. base case
    if (n <= 2)
        return 1;

    // 2. check if current state is already solved
    if (dp[n] != -1)
        return dp[n];

    int result = fib(n - 1) + fib(n - 2);
    dp[n] = result;
    return result;
}
int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        dp[i] = -1; // mark all state as unvisited
    }

    cout << fib(n) << endl;
    return 0;
}