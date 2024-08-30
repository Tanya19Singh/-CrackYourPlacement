#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
bool checkprecision(char ch1, char ch2)
{
    if((ch1=='+'||ch1=='-')&&(ch2=='*'||ch2=='/'))
    return false;
    return true;
}
    int calculate(string s) {
        int temp=0;
        stack<int>st1;
        stack<char>st2;
        for(auto it:s)
        {
            if(it==' ')
            continue;
            if(it>='0'&&it<='9')
            temp=temp*10+(it-'0');
            else{
                st1.push(temp);
                temp=0;
                while(!st2.empty()&&checkprecision(st2.top(),it))
                {
                    int a=st1.top();
                    st1.pop();
                    int b=st1.top();
                    st1.pop();
                    char ch=st2.top();
                    st2.pop();
                    if(ch=='*')
                    st1.push(a*b);
                    else if(ch=='/'&& a!=0)
                    st1.push(b/a);
                    else if(ch=='+')
                    st1.push(a+b);
                    else if(ch=='-')
                    st1.push(b-a);
                }
                st2.push(it);

            }
            }
             st1.push(temp);
            while(st1.size()>1)
            {
                 int a=st1.top();
                    st1.pop();
                    int b=st1.top();
                    st1.pop();
                    char ch=st2.top();
                    st2.pop();
                    if(ch=='+')
                    st1.push(a+b);
                    else if(ch=='-')
                    st1.push(b-a);
                    else if(ch=='*')
                    st1.push(a*b);
                    else if(ch=='/'&& a!=0)
                    st1.push(b/a);

        }
        return st1.top();
    }
};
