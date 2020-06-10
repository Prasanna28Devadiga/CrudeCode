#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase=0;
    cin>>testcase;
    for(int p=0;p<testcase;p++){
        ll x=0,n=0,m=0;
        cin>>x>>n>>m;
        if(x<=20){
           while(x!=0 && m!=0){
                x=x-10;
                m--;
            }
            if(x>0)
            cout<<"NO"<<"\n";
            else
            cout<<"YES"<<"\n";
        }
        else
        {
            while(x!=0 && n!=0)
            {
                x=x/2 +10;
                n--;
                
            }
            while(x!=0 && m!=0){
                x=x-10;
                m--;
            }
            if(x>0)
            cout<<"NO"<<"\n";
            else
            cout<<"YES"<<"\n";
        }
        
        
        
    }

    return 0;
}
