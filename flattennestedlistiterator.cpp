#include<bits/stdc++.h>
using namespace std;
class NestedInteger {
   public:
     bool isInteger() const;
      int getInteger() const;
     const vector<NestedInteger> &getList() const;
 };
 
class NestedIterator {
public:
stack<NestedInteger>st;
    NestedIterator(vector<NestedInteger> &nestedList) {
        for(auto it=nestedList.rbegin();it!=nestedList.rend();it++)
        {
            st.push(*it);
        }
    }
    
    int next() {
       if(hasNext())
       {
        NestedInteger top=st.top();
        st.pop();
        return top.getInteger();
       } 
       return -1;
    }
    
    bool hasNext() {
        while(!st.empty())
        {
            NestedInteger top=st.top();
            if(top.isInteger())
            return true;
        
        st.pop();
        const vector<NestedInteger>&nestedList=top.getList();
        for(auto it=nestedList.rbegin();it!=nestedList.rend();++it)
        {
            st.push(*it);
        }
        }
        return false;
    }
};
