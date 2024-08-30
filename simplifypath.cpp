#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string simplifyPath(string path) {
istringstream ss(path);
string word,ans="";
vector<string>v;
while(getline(ss,word,'/'))  
{
    if(word==".."&&!v.empty())
    v.pop_back();
    if(word.size()!=0&&word!=".."&&word!=".")
    v.push_back(word);

} 
if(v.size()==0)
ans="/";
for(auto it:v)
{
    ans+='/'+it;
}
return ans;
    }
};