#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       for(int i=0;i<matrix.size();i++)
       for(int j=i;j<matrix.size();j++)
       swap(matrix[i][j],matrix[j][i]);

        for(int j=0;j<matrix.size()/2;j++)
        for(int i=0;i<matrix.size();i++)
        swap(matrix[i][j],matrix[i][matrix.size()-j-1]);
    }
};