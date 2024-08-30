#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxScore(vector<int> cardPoints, int k) {
       
    int i=0,j=cardPoints.size()-1,sum=0;
    while(i<k)
    {
        sum+=cardPoints[i];
        i++;
    }
    int maxsum=sum;
    i--;
    while(i>=0)
    {
        sum-=cardPoints[i];
        i--;
        sum+=cardPoints[j];
        j--;
        maxsum=max(maxsum,sum);
    }

    return maxsum;

    }
};