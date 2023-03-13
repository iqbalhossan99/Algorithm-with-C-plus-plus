#include<bits/stdc++.h>
using namespace std;

int main()
{
          int nodes = 4;
          vector<vector<int>>edge_list;

          // un-weighted edge list
//          edge_list.push_back({0 ,1});
//          edge_list.push_back({1, 2});
//          edge_list.push_back({1, 3});
//          edge_list.push_back({2, 3});

           // weighted edge list
          edge_list.push_back({0 ,1, 2});
          edge_list.push_back({1, 2, 4});
          edge_list.push_back({1, 3, 9});
          edge_list.push_back({2, 3, 1});

          for( int i=0; i<edge_list.size(); i++)
          {
                     // un-weighted edge list
//                    cout<<edge_list[i][0]<<" -- "<<edge_list[i][1]<<endl;

                     // weighted edge list
                    cout<<edge_list[i][0]<<" -- "<<edge_list[i][1]<<" | "<<edge_list[i][2]<<endl;
          }
    return 0;
}
