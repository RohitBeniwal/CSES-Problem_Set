#include<bits/stdc++.h>
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
typedef long long int ll;

using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    ll n;
    cin>>n;
    vector<ll> v;
    v.push_back(n);
    ll x=n;
    while(x!=1){
        if(x%2){
            x=(3*x+1);
            v.push_back(x);
        }
        else{
            x=(x/2);
            v.push_back(x);
        }
    }
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}