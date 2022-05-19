// https://codeforces.com/problemset/problem/49/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int n=s.length();
    //cout<<n<<endl;
    while(!((s[n-1]>=65 && s[n-1]<=90)||(s[n-1]>=97 && s[n-1]<=122)))
    {
        n--;
    }
    //cout<<s[n-1]<<" "<<n<<endl;
    if((s[n-1]=='A')||(s[n-1]=='E')||(s[n-1]=='I')||(s[n-1]=='O')||(s[n-1]=='U')||(s[n-1]=='Y')||(s[n-1]=='a')||(s[n-1]=='e')||(s[n-1]=='i')||(s[n-1]=='o')||(s[n-1]=='u')||(s[n-1]=='y'))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    cout<<endl;
    return 0;
}