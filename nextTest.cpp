// https://codeforces.com/problemset/problem/27/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,x;
    cin>>t;
    vector<int> v;
    for(int i=0;i<t;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int i=0;
    for(i=1;i<=t;i++) {
        if (v[i-1]!=i)
        {
            cout<<i;
            break;
        }
    }
    if(i==t+1) 
        cout<<t+1;
    return 0;
}