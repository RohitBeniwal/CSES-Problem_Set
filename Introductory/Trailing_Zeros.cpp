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
    ll ans=0;
    for(int i=5;i<=n;i*=5){
        ans+=n/i;
    }
    cout<<ans<<endl;
    return 0;
}