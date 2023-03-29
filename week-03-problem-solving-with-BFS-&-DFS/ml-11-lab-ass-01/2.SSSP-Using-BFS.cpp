#include<bits/stdc++.h>
using namespace std;
const int n =  1e5;

 vector<int> adj_list[n];

int main()
{
          int nodes, edges;
          cin>>nodes>>edges;

          int u, v;
          for(int i=0; i<edges; i++)
          {
                    cin>>u>>v;
                    adj_list[u].push_back(v);
                    adj_list[v].push_back(u);
          }

          for(int i=0; i<edges; i++)
          {
                    for(int j=0; j<adj_list[i].size(); j++)
                     cout<<adj_list[i][j]<<" ";

                    cout<<endl;
          }



    return 0;
}
