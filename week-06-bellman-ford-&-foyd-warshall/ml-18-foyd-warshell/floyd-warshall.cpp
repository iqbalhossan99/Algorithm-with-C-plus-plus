#include <bits/stdc++.h>
using namespace std;
const int sz = 1e3 + 3;
const long long inf = 1e18;
long long d[sz][sz];

/*

4 6
4 1 20
4 3 8
3 2 5
2 3 2
2 1 2
1 2 3



*/

int main() {

          int n, m;

          cin>>n>>m;

          for(int i =1 ; i <= n ; i++){
                    for( int j = 1 ; j <= n ; j++){
                              d[i][j] = inf;
                    }
          }

          for( int i = 0 ; i < m ; i++)
          {
                    int u, v, w;
                    cin>>u>>v>>w;
                    d[u][v] = w;
          }

          for(int i = 1 ; i <= n ; i++)
          {
                    d[i][i] = 0;
          }

          for( int k = 1; k <= n ; k++)
          {
                    for(int u = 1 ; u <= n ; u++)
                    {
                              for(int v = 1 ; v <= n ; v++)
                              {
                                        d[u][v] = min(d[u][v], d[u][k] + d[k][v]);
                              }
                    }
          }

          for(int i = 1 ; i <= n ; i++)
          {
                    for(int j = 1 ; j <= n ; j++)
                    {
                              cout<<d[i][j]<<" ";
                    }
                    cout<<endl;
          }

    return 0;
}
