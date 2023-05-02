#include <iostream>
using namespace std;

long long dp[100];

long long fib(int n)
{
  if (n <= 2)
    return 1;

  if (dp[n] != 0)
    return dp[n];

  dp[n] = fib(n - 1) + fib(n - 2);

  return dp[n];
}
int main()
{

  cout << "Hello World!\n";
  cout << fib(3) << endl;
  cout << fib(5) << endl;
  cout << fib(6) << endl;
  cout << fib(50) << endl;
  return 0;
}