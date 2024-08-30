#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=needle.size();
        int m=haystack.size();
       while(i<=m-j)
       {
        string str=haystack.substr(i,j);
        if(str==needle)
        return i;
        i++;
       }
       return -1;
    }
};