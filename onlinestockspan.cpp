#include<bits/stdc++.h>
using namespace std;
class StockSpanner {
public:
stack<pair<int,int>>st;
    StockSpanner() {
       stack<pair<int,int>>st=st;
    }
    
    int next(int price) {
   
    int ct=1;

        while(!st.empty()&&(st.top().first<=price))
        {ct+=st.top().second;st.pop();}
        st.push({price,ct});
      
    
    return ct;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */