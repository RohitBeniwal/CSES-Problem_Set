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
    vector<ll> v(n);
    ll ans=0;
    rep(i,0,n){
        cin>>v[i];
        if(i){
            if(v[i]<v[i-1]){
                ans+=v[i-1]-v[i];
                v[i]=v[i-1];
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}