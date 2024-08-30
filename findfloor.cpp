#include<bits/stdc++.h>
using namespace std;
 int findFloor(vector<long long> &v, long long n, long long x) {

        // Your code here
        long long i=0;
        while(i<n&&v[i]<=x)
        {
            i++;
        }
        return i-1;
    }