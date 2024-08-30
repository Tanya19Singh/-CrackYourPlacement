#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1,j=b.size()-1;
        int carry=0;
        string ans="";
        while(i>=0||j>=0)
        {
            int sum=0;
            if(carry)
            sum++;
            if(i>=0&&a[i]=='1')
            sum++;
            
            if(j>=0&&b[j]=='1')
            sum++;
            if(sum==1)
            {ans='1'+ans;carry=0;}
            if(sum==2||sum==0)
            {ans='0'+ans;if(sum==2)carry=1;}
            if(sum==3)
            {ans='1'+ans;carry=1;}
            i--;j--;
        }
        if(carry==1)
        ans='1'+ans;
        return ans;
    }
};