#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isNumber(string s) {
        bool digitflag=false,eflag=false,dotflag=false;
        int countoperator=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0'&&s[i]<='9')
            digitflag=true;
            else if(s[i]=='+'||s[i]=='-')
            {
                if(countoperator==2)
                return false;
                if(i>0&&(s[i-1]!='e'&&s[i-1]!='E'))
                return false;
                if(i==s.size()-1)
                return false;
                countoperator++;

            }
            else if(s[i]=='.')
            {
                if(eflag||dotflag)
                return false;
                if(i==s.size()-1&& !digitflag)
                return false;
                dotflag=true;
            }
            else if(s[i]=='e'||s[i]=='E')
            {
                if(eflag||!digitflag||i==s.size()-1)
                return false;
                eflag=true;
            }
            else
            return false;

        }
        return true;
    }
};