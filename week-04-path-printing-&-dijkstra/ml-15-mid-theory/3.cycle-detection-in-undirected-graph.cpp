
// problem link - https://cses.fi/problemset/task/1678/

/*
Test cycle exist:

4 3
1 2
2 3
1 3


Test cycle not exist

3 2
1 2
2 3
*/

#include <bits/stdc++.h>
using namespace std;

const int n = 2e5;

vector<int>adj_list[n];
int visited[n];

bool detect_cycle(int node, int parent)
{

    visited[node] = 1;

    for(int adj_node: adj_list[node])
    {
        /*

          - adj_node != parent
                  - visited[adj_node] == 0 -> unexplore node |  apply dfs
                  - visited[adj_node] == 1 -> "paused" node | cycle detected
                  - visited[adj_node] == 2 -> "done" node | continue
        */

        if(adj_node != parent)
        {
            if(visited[adj_node] == 0)
            {
                bool got_cycle = detect_cycle(adj_node, node);
                if(got_cycle)
                    return true;
            }
            else if(visited[adj_node] == 1)
                return true;
        }
    }

    visited[node] = 2;
    return false;
}

int main()
{
    int n, m;
    cin >>n>>m;

    for(int i=0; i<m; i++)
    {
        int u, v;
        cin>>u>>v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

    }

    bool cycle_exists = false;

    for(int i =1; i<= n; i++)
    {
        if(visited[i] ==0 )
        {
            bool got_cycle = detect_cycle(i, -1);
            if(got_cycle)
            {
                cycle_exists = true;
                break;
            }
        }
    }

    if(cycle_exists)
    {
        cout<<"Cycle Exists"<<endl;
    }
    else
    {
        cout<<"NO cycle"<<endl;
    }

    return 0;
}
