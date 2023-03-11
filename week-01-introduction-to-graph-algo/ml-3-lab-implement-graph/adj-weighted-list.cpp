#include<bits/stdc++.h>
using namespace std;

// Total Time Complexity = O(1) + O(n^2) + O(n^2) = O(n^2)
// Total Space Complexity = O(1) + O(n^2) + O(1) = O(n^2)
int main()
{

          int nodes = 4; //O(1)

          vector<pair<int, int>>adj_list[nodes]; // weighted // time complexity O(1); space complexity O(n)

          // In general mone hobe time complexity O(1) but when change the node size then
          // it will be increase of the time complexity.
          // And every single edge connect with two nodes. Like  1 is connected with 3 and 3 with connected with 1.
          // So Time/Space Complexity is O(E * 2) = O(E) = wost case O(n^2);
          adj_list[0].push_back ({1, 2}); // un-weighted
          adj_list[1].push_back({2, 4});
          adj_list[3].push_back({2,8});
          adj_list[3].push_back({1, 7});

          // Time complexity O(2 * E) = O(E) = O(n^2); Space Complexity O(1)
          for(int i = 0; i<nodes; i++)
          {
                    cout<<i<< " -> ";
                    for(int j = 0; j<adj_list[i].size(); j++)
                    {
                              cout<<"("<<adj_list[i][j].first<<" ,"<<adj_list[i][j].second<<"), ";
                    }

                    cout<<"\n";
          }
    return 0;
}
