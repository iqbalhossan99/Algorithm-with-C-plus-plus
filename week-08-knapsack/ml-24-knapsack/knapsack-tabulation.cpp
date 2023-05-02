// problem link - https://atcoder.jp/contests/dp/tasks/dp_d

#include<bits/stdc++.h>
using namespace std;
/*
    - state: knapsack(n, cap) -> maximum profit considering objects 1 to n and capacity=cap
    - recurrance:
        knapsack(n, cap) -> max {
                                val[n] + knapsack(n - 1, cap - wt[n]),
                                knapsack(n - 1, cap)
                            }
    - base_case: knapsack(0, x) = 0
*/
const int N = 102;
const int M = 1e5 + 5;

long long dp[N][M];
int wt[N], val[N];


int main()
{
    int n, cap;
    cin >> n >> cap;

    for(int i = 1 ; i <= n ; i++)
    {
        cin >> wt[i] >> val[i];
    }

    // 1. base case
    for(int i = 0 ; i <= cap; i++)
    {
        dp[0][i] = 0;
    }

    // 2. loop over the states
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 0 ; j <= cap ; j++)
        {
            // 2.1. calculate the result from smaller sub-problems

            if(j < wt[i])
            {
                dp[i][j] = dp[i-1][j];
            }
            else
            {
                dp[i][j] = max(
                              val[i] + dp[i - 1][j - wt[i]],
                              dp[i - 1][j]
                    );
            }
        }
    }


    cout << dp[n][cap] << endl;
    return 0;

}
