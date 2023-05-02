#include <iostream>
using namespace std;
const int N = 1e5;

int arr[N];

int main()
{
    int t;

    cin >> t;

    // test case
    for (int it = 1; it <= t; it++)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        int result1 = 0;
        int result2 = 0;

        for (int j = 1; j <= n; j += 2)
        {
            result1 = result1 + arr[j];
        }
        for (int j = 2; j <= n; j += 2)
        {
            result2 = result2 + arr[j];
        }

        if (result1 > result2)
            cout << "Case " << it << ": " << result1 << endl;
        else
            cout << "Case " << it << ": " << result2 << endl;
    }

    return 0;
}