class Solution {
public:
    void traverse_island(int row_index, int column_index, vector<vector<char>>& grid) {
        int rows = grid.size();
        int columns = grid[0].size();
        std::queue<int> indices;      
		
        grid[row_index][column_index] = -1;
        
        if(row_index - 1 >= 0 && grid[row_index - 1][column_index] == '1') {
            grid[row_index - 1][column_index] = -1;
            indices.push((row_index - 1) * columns + column_index);
        }
        
        if(row_index + 1 < rows && grid[row_index + 1][column_index] == '1') {
            grid[row_index + 1][column_index] = -1;
            indices.push((row_index + 1) * columns + column_index);
        }
        
        if(column_index - 1 >= 0 && grid[row_index][column_index - 1] == '1') {
            grid[row_index][column_index - 1] = -1;
            indices.push(row_index * columns + column_index - 1);
        }
        
        if(column_index + 1 < columns && grid[row_index][column_index + 1] == '1') {
            grid[row_index][column_index + 1] = -1;
            indices.push(row_index * columns + column_index + 1);
        }
        
        while(!indices.empty()) {
            int i = indices.front() / columns;
            int j = indices.front() % columns;
            indices.pop();
            
            if(i - 1 >= 0 && grid[i - 1][j] == '1') {
                grid[i - 1][j] = -1;
                indices.push((i - 1) * columns + j);
            }
            if(i + 1 < rows && grid[i + 1][j] == '1') {
                grid[i + 1][j] = -1;
                indices.push((i + 1) * columns + j);
            }
            if(j - 1 >= 0 && grid[i][j - 1] == '1') {
                grid[i][j - 1] = -1;
                indices.push(i * columns + j - 1);
            }
            if(j + 1 < columns && grid[i][j + 1] == '1') {
                grid[i][j + 1] = -1;
                indices.push(i * columns + j + 1);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()) 
            return 0;
        
        int no_of_islands {0};
        int rows = grid.size();
        int columns = grid[0].size();
        
        for(int i = 0; i < rows; ++i) {
            for(int j = 0; j < columns; ++j) {
                if(grid[i][j] == '1') {
                    traverse_island(i, j, grid);
                    ++no_of_islands;
                }
            }
        }
        
        return no_of_islands;
    }
};
