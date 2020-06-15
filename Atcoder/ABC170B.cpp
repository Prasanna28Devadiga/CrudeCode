#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase=1;
   // cin>>testcase;
    for(int p=0;p<testcase;p++){
     ll x1=0,x2=0,x3=0,x4=0,x5=0  ;
    cin>>x1>>x2>>x3>>x4>>x5;
    if(x1==0)
    cout<<"1"<<"\n";
    else if(x2==0)
    cout<<"2"<<"\n";
    else if(x3==0)
    cout<<"3"<<"\n";
    else if(x4==0)
    cout<<"4"<<"\n";
    else
    cout<<"5"<<"\n";
    }

    return 0;
}
