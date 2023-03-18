
#include<bits/stdc++.h>
using namespace std;
const int n = 1e5;

int visited[n];

vector<int>adj_list[n];

void bfs(int src)
{
          queue<int>q;

          visited[src] = 1;
          q.push(src);

          while(!q.empty())
          {
                    int head = q.front();
                    q.pop();
                    cout<<head<<"\n";

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

6 8

2 3
3 4
4 5
4 1
1 6
6 2
6 3
2 1

output = 2 3 6 1 4 5


*/
int main()
{
          int nodes, edges;
          cin>>nodes>>edges;

          for(int i=0; i<edges; i++)
          {
                    int u, v;
                    cin>>u>>v;
                    adj_list[u].push_back(v);
                    adj_list[v].push_back(u);

          }

          int src = 2;

          bfs(src);


    return 0;
}
