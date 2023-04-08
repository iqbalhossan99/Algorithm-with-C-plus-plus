/*
// Problem Link - https://cses.fi/problemset/task/1193
/**
* author: mj_riffu
* created: 2023-03-21 20:32:10

5 8
########
#.A#...#
#.##.#B#
#......#
########


*/

#include <bits/stdc++.h>
#include <deque>

using namespace std;
const int n = 1010;
char grid[n][n];
bool visited[n][n];
pair<int,int>parent[n][n];
deque<pair<int, int>> safe_cells;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0,  -1};
char dir[4] = {'D', 'R', 'U', 'L'};

void bfs(int x, int y, int rows, int cols)
{
    queue<pair<int, int>> q;
    q.push({x, y});

    visited[x][y] = true;
    parent[x][y] = {-1, -1};

    while(!q.empty())
    {
        pair<int, int> u = q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int dx_, dy_;
            dx_ = u.first + dx[i];
            dy_ = u.second + dy[i];
            if(dx_ >= 1 && dx_<rows && dy_ >= 1 && dy_ <cols && !visited[dx_][dy_] && grid[dx_][dy_] != '#' && grid[dx_][dy_] != 'M')
            {
                visited[dx_][dy_] = true;
                q.push({dx_, dy_});
                parent[dx_][dy_] = u;
            }
        }
    }
}

int main()
{

    int rows, cols;
    cin>>rows>>cols;
    int start_x, start_y, end_x, end_y;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cin>>grid[i][j];
            if(grid[i][j] == 'A')
            {
                start_x = i;
                start_y = j;
            }
            if(i==0||i==rows-1||j==0||j==cols-1)
            {
                if(grid[i][j] == '.')
                {
                    safe_cells.push_back({i,j});
                }
            }
        }
    }

    bfs(start_x, start_y, rows, cols);


    int x, y;

    while(!safe_cells.empty())
    {

        x = safe_cells.front().first;
        y = safe_cells.front().second;
        safe_cells.pop_front();
    }

    if(visited[x][y])
    {
        cout<<"YES\n";
        vector<pair<int, int>> path;
        path.push_back({x, y});

        while(parent[x][y] != make_pair(-1, -1))
        {
            pair<int, int> p = parent[x][y];
            x = p.first, y = p.second;
            path.push_back({x, y});
        }
        reverse(path.begin(), path.end());

        string ans;
        for(int i=0; i<path.size()-1; i++ )
        {
            for(int j=0; j<4; j++ )
            {
                int dx_, dy_;
                dx_ = path[i].first + dx[j];
                dy_ = path[i].second + dy[j];
                if(dx_ == path[i+1].first && dy_ == path[i+1].second)
                {
                    ans.push_back(dir[j]);
                    break;
                }
            }
        }
        cout<<ans.size()<<'\n';
        cout<<ans<<'\n';
    }
    else cout<<"NO\n";

    return 0;
}
