#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
bool searchword(vector<vector<char>>&board,string &word,int row,int col,int  index)
{
    if(index==word.size())
    return true;

    if(row<0||col<0||row==board.size()||col==board[0].size()||board[row][col]!=word[index]||board[row][col]=='!')
    return false;
    char c=board[row][col];
    board[row][col]='!';
    bool left=searchword(board,word,row,col-1,index+1);
    bool right=searchword(board,word,row,col+1,index+1);
    bool top=searchword(board,word,row-1,col,index+1);
    bool bottom=searchword(board,word,row+1,col,index+1);
    board[row][col]=c;
    return left||right||top||bottom;

}
    bool exist(vector<vector<char>>& board, string word) {
         for(int row=0;row<board.size();row++)
    {
        for(int col=0;col<board[0].size();col++)
        {
            if(board[row][col]==word[0])
             if(searchword(board,word,row,col,0))
             return true;
        }
    }
    return false;
    }
};