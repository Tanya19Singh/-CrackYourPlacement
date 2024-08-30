#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convertToTitle(int columnNumber) {
        char arr[27]={'Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y'};
        string s="";
        while(columnNumber>0)
        {
            int n=columnNumber%26;
            s=arr[n]+s;
            columnNumber/=26;
            if(n==0)
            columnNumber--;
                        
        }
        return s;
        
    }
};
