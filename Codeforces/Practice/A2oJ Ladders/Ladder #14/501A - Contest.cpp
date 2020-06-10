#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase=0;
    cin>>testcase;
    int array[100]={0};
    int sum=0;
    for(int p=0;p<testcase;p++){
        cin>>array[p];
        sum+=array[p];
    }
    sort(array,array+testcase,greater<int>());
    int no=0;
    int sum1=0;
    for(int i=0;i<testcase;i++){
    sum1+=array[i];
    no++;
    if(sum1>(sum/2))
    break;
    }
    cout<<no;

    return 0;
}
