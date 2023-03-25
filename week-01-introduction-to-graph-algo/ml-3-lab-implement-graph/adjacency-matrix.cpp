#include<bits/stdc++.h>
#include<iostream>
using namespace std;

/*

adj matrix
time complexity -> o(1) + o(n^2) + o(1) + o(n^2) = o(n^2)
space complexity -> o(1) + o(n^2) = o(n^2)

*/
int main()
{
          int nodes = 4; //O(1) // space complexity o(n^2)

          int matrix[nodes][nodes] = {{0,0},{0,0},{0,0},{0,0}}; //o(n^2)  // space complexity o(n^2)

          // o(E) // E -> n^2;
          //A ---- B
          // n x n = n^2

          //o(n^2)
          matrix[0][1] = 1; //o(1)
          matrix[1][0] = 1;

          matrix[1][2] = 1;
          matrix[2][1] = 1;

          matrix[2][3] = 1;
          matrix[3][2] = 1;

          matrix[1][3] = 1;
          matrix[3][1] = 1;

          //o(n^2)
          for(int i=0; i<nodes; i++)
          {
                    for(int j=0; j<nodes; j++)
                    {
                            cout<<matrix[i][j]<< " ";
                    }
                    cout<<"\n";
          }

    return 0;
}
