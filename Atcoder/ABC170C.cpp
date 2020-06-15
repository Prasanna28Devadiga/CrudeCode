#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase=1;
    //cin>>testcase;
    for(int p=0;p<testcase;p++){
    ll x=0,n=0;
    cin>>x>>n;
    if(n==0)
    cout<<x;
    else {
        int array[101]={0};
        int hash[301]={0};
        for(int i=0;i<n;i++){
            cin>>array[i];
            hash[array[i]+100]++;
            
        }
        ll min=999,max=0;
        for(int i=0;i<100;i++){
            if(hash[x-i+100]==0)
            {
                min=x-i;
                break;
            }
        }
        for(int i=0;i<100;i++){
            if(hash[x+i+100]==0)
            {
                max=x+i;
                break;
            }
        }
        //cout<<min<<' '<<max<<' '<<"\n";
        if(abs(min-x)<=abs(max-x))
        cout<<min;
        else
        cout<<max;
    }
    
        
    }

    return 0;
}
