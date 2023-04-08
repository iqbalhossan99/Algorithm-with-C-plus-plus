#include<bits/stdc++.h>
using namespace std;
const int SZ = 1e5;

int visited[SZ];

vector<int>adj_list[SZ];

void bfs(int src)
{
          queue<int>q;

          visited[src] = 1;
          q.push(src);

          while(!q.empty())
          {
                    int head = q.front();
                    q.pop();

                    for(int adj_node: adj_list[head])
                    {
                              if(visited[adj_node] == 0)
                              {
                                        visited[adj_node] = 1;
                                        q.push(adj_node);

                              }
                    }
          }
}
/*


10 8

1 3
3 4
3 6
4 6
2 5
1 7
3 10
9 8

YES

8 6
7 4
7 6
4 6
2 5
1 3
7 8

N0


*/
int main()
{
          int n, edges;
          cin>>n>>edges;

          for(int i=0; i<edges; i++)
          {
                    int u, v;
                    cin>>u>>v;
                    adj_list[u].push_back(v);
                    adj_list[v].push_back(u);

          }

          int src = 1;

          bfs(src);

          if(visited[n])
                    cout<<"YES\n";
          else cout<<"NO\n";


    return 0;
}
