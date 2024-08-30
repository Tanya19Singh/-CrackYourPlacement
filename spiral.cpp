#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
	vector<int>ans;
    int rows=matrix.size();
    int cols=matrix[0].size();
    int row=0,col=-1;
    int direction =1;
    while(rows>0&&cols>0)
    {
        for(int i=0;i<cols;i++)
        {
            col+=direction;
            ans.push_back(matrix[row][col]);
        }
        rows--;
        
        for(int i=0;i<rows;i++)
        {
            row+=direction;
            ans.push_back(matrix[row][col]);
        }
        cols--;
        direction*=-1;

    }
    return ans;
} 
    
};