#include<bits/stdc++.h>
#define MOD 1000000007
#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define vll vector<ll>
#define pll pair<ll,ll>
#define all(x) (x).begin(), (x).end()
#define mp make_pair
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
typedef long long int ll;
typedef long double lld;

using namespace std;

bool comp(pll a,pll b){
    return a.second<b.second;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    ll n;
    cin>>n;
    vector<pll> v;
    rep(i,0,n){
        ll x,y;
        cin>>x>>y;
        v.pb(mp(x,y));
    }
    sort(all(v),comp);
    ll cnt=1;
    ll tmp=v[0].ss;
    rep(i,1,n){
        if(tmp<=v[i].ff){
            cnt++;
            tmp=v[i].ss;
        }

    }
    // cout<<endl;
    cout<<cnt<<endl;
    return 0;
}