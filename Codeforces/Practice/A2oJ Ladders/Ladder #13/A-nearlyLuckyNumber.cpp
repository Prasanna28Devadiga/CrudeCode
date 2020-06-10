// auth: starkizard
// counting the number of 4s and 7s . then checking if in that count every digit is either 4 or 7.
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define f(i, a, b) for (long long i = a; i < b; i++)
#define rep(i, a, b) for (long long i = a; i <= b; i++)
#define fm(i, a, b) for (long long i = a; i > b; i--)
#define repm(i, a, b) for (long long i = a; i >= b; i--)
#define vi vector<int>
#define vl vector<long long>
#define vs vector<string>
#define pqmaxi priority_queue<int>
#define pqmaxl priority_queue<ll>
#define pqmini priority_queue<int, vi, greater<int>>
#define pqminl priority_queue<ll, vl, greater<ll>>
#define all(x) x.begin(), x.end()
#define test     \
    ll test;     \
    cin >> test; \
    while (test--)
#define pb(i) push_back(i)
#define mp(i, j) make_pair(i, j)
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    fast;
    string s;
    cin >> s;
    ll count=0;
    for(auto i: s) if(i=='4' || i=='7') count++;
    string cnt= to_string(count);
    int flag=0;
    for(auto i: cnt){
        if(i!='4' && i!='7'){
            flag=1;
            break;
        }
    }
    if(flag){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
    }
    return 0;
}