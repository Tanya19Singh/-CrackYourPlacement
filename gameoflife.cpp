#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int count(vector<vector<int>>& board,int i,int j)
    {
        int ct=0;
        vector<int>I={-1,-1,0,+1,+1,+1,0,-1};
        vector<int>J={0,+1,+1,+1,0,-1,-1,-1};
for(int k=0;k<8;k++)
{
    int row=i+I[k],col=j+J[k];
    if(row<0||row>=board.size()||col<0||col>=board[0].size())
    continue;
    int cell=board[row][col];
if(cell==1||cell==-2)
ct++;
}
return ct;
    }
    void gameOfLife(vector<vector<int>>& board) {
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                int ct=count(board,i,j);
                if(board[i][j]==0&&ct==3)
                board[i][j]=2;
                else if(board[i][j]==1&&(ct<2||ct>3))
                board[i][j]=-2;
            }
        }
        for(auto &it:board)
        for(auto &i:it)
        if(i==-2)
        i=0;
        else if(i==2)
        i=1;
    }
};