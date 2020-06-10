#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase=0;
    cin>>testcase;
    for(int p=0;p<testcase;p++){
        ll a=0,b=0,c=0,d=0;
        cin>>a>>b>>c>>d;
        if(d>c+b)
        cout<<b<<' '<<c<<' '<<c+b-1<<"\n";
        else if(d==c+b)
        cout<<b<<' '<<c<<' '<<d-1<<"\n";
        else
        cout<<b<<' '<<c<<' '<<d<<"\n";
    }

    return 0;
}
