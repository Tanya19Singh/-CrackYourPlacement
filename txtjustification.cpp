#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int l=0;
        vector<vector<int>>v;
        while(l<words.size())
        {
            int  extraspace=0,sumcharacters=0,w=0;
            while(l<words.size()&&(sumcharacters+words[l].size())<=maxWidth)
            {
                sumcharacters+=words[l].size()+1;
                l++;
                w++;
            }
            v.push_back({maxWidth-sumcharacters+1,w-1});

        }
        vector<string>ans;
        int i=0,t=0;
        for(auto it:v)
        {
            int extraspace=it[0];
            int wordct=it[1];
            string s="";
            
            while(wordct>=0)
            {

                s+=words[i];i++;
                if(wordct==0)
                while((t!=(v.size()-1))&&extraspace)
                {
                    s+=" ";extraspace--;
                }
                else
                {
                    if(t!=v.size()-1)
                    {
                        for(int j=0;j<extraspace/wordct;j++)
                {
                    
                    s+=" ";
                }
                int f=0;
                if((extraspace%wordct)>0)
                {
                    
                    s+=" ";
                    f=1;
                }
                extraspace-=extraspace/wordct+f;
                }
                s+=" ";      
                }
                wordct--;
            }
ans.push_back(s);
t++;
        }
        return ans;
    }
};
int main()
{
    vector<string>v={"Do","all","the","good","you","can,","By","all","the","means","you","can,","In","all","the","ways","you","can,","In","all","the","places","you","can,","At","all","the","times","you","can,","To","all","the","people","you","can,","As","long","as","ever","you","can."};
    Solution ob;
    vector<string>ans=ob.fullJustify(v,26);
    for(auto it:ans)
    cout<<it<<" ";

}