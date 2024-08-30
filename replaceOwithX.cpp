#include<bits/stdc++.h>
using namespace std;
void dfs(int row,int col,vector<vector<int>>&visited,vector<vector<char>>grid)
    {
       visited[row][col]=1;
       int n=grid.size();
       int m=grid[0].size();
       queue<pair<int,int>>q;
       q.push({row,col});
       while(!q.empty())
       {
           int r=q.front().first;
           int c=q.front().second;
           q.pop();
           for(int i=-1;i<=1;i++)
           {
               for(int j=-1;j<=1;j++)
               {
                   if((r+i)>=0&&(c+j)>=0&&(r+i)<n&&(c+j)<m&&grid[r+i][c+j]=='1'&&!visited[r+i][c+j])
                   {
                       visited[r+i][c+j]=1;
                       q.push({r+i,c+j});
                   }
               }
           }
       }
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        vector<vector<int>>visited(grid.size(),vector<int>(grid[0].size(),0));
        int ct=0;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        {
            if(grid[i][j]=='1'&&!visited[i][j])
{            dfs(i,j,visited,grid);
            ct++;}
        }
        return ct;
    }