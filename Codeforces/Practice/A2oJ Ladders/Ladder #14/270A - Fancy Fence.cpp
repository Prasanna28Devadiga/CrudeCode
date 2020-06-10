#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase=0;
    cin>>testcase;
    for(int p=0;p<testcase;p++){
    float x=0;
    cin>>x;
    x=180-x;
    x=360/x;
    if(floor(x)==ceil(x))
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
        
    }

    return 0;
}
