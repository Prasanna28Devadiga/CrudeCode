#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase=1;
    //cin>>testcase;
    for(int p=0;p<testcase;p++){
    ll x=0,y=0;
     cin>>x>>y;
    if(y%2!=0)
    cout<<"No";
    else if(y<x*2 || y>x*4)
    cout<<"No";
    else cout<<"Yes";
        
    }

    return 0;
}
