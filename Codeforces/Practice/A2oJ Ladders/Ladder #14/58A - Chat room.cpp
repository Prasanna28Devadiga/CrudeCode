#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase=1;
    //cin>>testcase;
    for(int p=0;p<testcase;p++){
   string s;
   string t="hello";
   cin>>s;
   int j=0;
   for(int i=0;i<s.size() && j<5;i++){
       
    if(s[i]==t[j])
        {
            j++;
            
        }
    }
    if(j==5)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
}
    return 0;
}
