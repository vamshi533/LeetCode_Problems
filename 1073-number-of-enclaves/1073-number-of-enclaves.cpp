class Solution {
public:

    void bfs(vector<vector<int>>& grid,int row,int col)
    {
        int m=grid.size();
        int n=grid[0].size();
        int rowarr[]={-1,0,1,0};
        int colarr[]={0,1,0,-1};
        queue<pair<int,int>>arr;
        arr.push({row,col});
        grid[row][col]=0;
        while(!arr.empty())
        {
            int a=arr.front().first;
            int b=arr.front().second;
            arr.pop();
            for(int i=0;i<4;i++)
            {
                int nr=a+rowarr[i];
                int nc=b+colarr[i];
                if(nr>=0 && nr<m && nc>=0 && nc<n && grid[nr][nc]==1)
                {
                    arr.push({nr,nc});
                    grid[nr][nc]=0;
                }
            }
        }
    }


    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;

        for(int j=0;j<n;j++)
        {
            if(grid[0][j]==1)
            {
                bfs(grid,0,j);
            }
            if(grid[m-1][j]==1)
            {
                bfs(grid,m-1,j);
            }
        }
        for(int i=0;i<m;i++)
        {
            if(grid[i][0]==1)
            {
                bfs(grid,i,0);
            }
            if(grid[i][n-1])
            {
                bfs(grid,i,n-1);
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    count++;
                }
            }
        }
        return count;
    }
};