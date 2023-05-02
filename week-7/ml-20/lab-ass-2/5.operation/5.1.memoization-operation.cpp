#include <iostream>
using namespace std;
const int N = 1e5;

int dp[N];
int cout_op = 0;

int operation(int n)
{
    if ((n % 2 != 0 && n % 3 != 0) && n !=0)
    {
        cout_op++;
        operation(n - 1);
    }
    else if (n % 3 == 0)
    {
        cout_op++;
        operation(n / 3);
    }
    else if (n % 2 == 0)
    {
        cout_op++;
        operation(n / 2);
    }

    return cout_op;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        dp[i] = -1;
    }

    cout << operation(n) << endl;
    return 0;
}
