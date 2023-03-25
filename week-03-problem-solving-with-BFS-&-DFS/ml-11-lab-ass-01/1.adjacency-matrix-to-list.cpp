#include<bits/stdc++.h>
using namespace std;

int main()
{
          int nodes;
          cin>>nodes;

          int adj_matrix[nodes][nodes];
          vector<int>adj_list[nodes];

          for(int i=0; i<nodes; i++)
          {
                    for(int j=0; j<nodes; j++)
                    {
                             cin>>adj_matrix[i][j];
                    }
          }


          for(int i=0; i<nodes; i++)
          {
                    for(int j=0; j<nodes; j++)
                    {
                              if(adj_matrix[i][j] == 1)
                              adj_list[i].push_back(j);
                    }
          }


          for(int i = 0; i<nodes; i++)
          {
                    cout<<i<< " -> ";
                    for(int j = 0; j<adj_list[i].size(); j++)
                    {
                              cout<<adj_list[i][j]<<" ";
                    }

                    cout<<"\n";
          }


//          for(int i=0; i<nodes; i++)
//          {
//                    for(int j=0; j<nodes; j++)
//                    {
//                             cout<<matrix[i][j]<<" ";
//                    }
//                    cout<<endl;
//          }



    return 0;
}
