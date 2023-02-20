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
    ll mod=1000000007;
    ll ans=1;
    rep(i,0,n){
        ans=(ans*2)%mod;
    }
    cout<<ans<<endl;
    return 0;
}