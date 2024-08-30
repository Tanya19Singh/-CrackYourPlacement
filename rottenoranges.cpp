#include<bits/stdc++.h>
using namespace std;
int orangesRotting(vector<vector<int>>& grid) {
        // Code here
       int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==2)
            {
                q.push({{i,j},0});
            }
        }
        int ans=0;
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            int r=it.first.first;
            int c=it.first.second;
            int t=it.second;
            ans=max(ans,t);
            int drow[]={-1,0,1,0};
            int dcol[]={0,1,0,-1};
            for(int i=0;i<4;i++)
            {
                int row=r+drow[i];
                int col=c+dcol[i];
                if((row>=0&&row<n&&col>=0&&col<m)&&grid[row][col]==1)
                {
                    q.push({{row,col},t+1});
                    grid[row][col]=2;
                }
            }
        }
        for(auto it:grid)
        for(auto i:it)
        if(i==1)
        return -1;

        return ans;  
    }
    int main()
    {
        vector<vector<int>>v={{0,1,2},{0,1,2},{2,1,1}};
        cout<<orangesRotting(v);
    }