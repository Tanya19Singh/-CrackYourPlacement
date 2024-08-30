#include<bits/stdc++.h>
using namespace std;class Solution {
public:
string helper(int n)
{
    string s="";
    vector<string>ones={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    vector<string>tens={"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    if(n/100>0)
    {
        s+=ones[n/100-1]+" Hundred";
        n=n%100;
        if((n)>0)
        s+=" ";
    }
    else
    n=n%100;
    if(n>0&&n<20)
    s+=ones[n-1];
    else
    {
        if(n/10>0)
        {s+=tens[n/10-2];if(n%10>0)s+=" ";}
        n%=10;
        if(n>0)
        s+=ones[n-1];

    }
    return s;
   }
    string numberToWords(int num) {
        if(num==0)
        return "Zero";
    string ans="";
    int billion=num/1000000000;
    if(billion>0)
    {ans+=helper(billion)+" Billion";if(num%1000000000>0)ans+=" ";}
    num%=1000000000;
    int million=num/1000000;
    if(million>0)
    {ans+=helper(million)+" Million";if(num%1000000>0)ans+=" ";}
    num%=1000000;
    int thou=num/1000;
     if(thou>0)
    {ans+=helper(thou)+" Thousand";if(num%1000>0)ans+=" ";}
    num%=1000;

    ans+=helper(num);
return ans;
    }
};