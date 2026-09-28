class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size(), cols = grid[0].size();
        int islands = 0;
        int dirs[4][2] = {{0,1}, {0,-1}, {1,0}, {-1,0}};
        set<pair<int,int>> visited;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] != '1' || visited.count({r, c})) continue;

                islands++;
                visited.insert({r, c});

                queue<pair<int,int>> q;
                q.push({r, c});

                while (!q.empty()) {
                    auto [cr, cc] = q.front();
                    q.pop();

                    for (auto& d : dirs) {
                        int nr = cr + d[0];
                        int nc = cc + d[1];

                        if (nr >= 0 && nr < rows && nc >= 0 && nc < cols
                            && visited.count({nr, nc}) == 0
                            && grid[nr][nc] == '1') {
                            visited.insert({nr, nc});
                            q.push({nr, nc});
                        }
                    }
                }
            }
        }
        return islands;
    }
};