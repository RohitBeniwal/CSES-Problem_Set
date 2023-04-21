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

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    ll n;
    cin>>n;
    unordered_map<ll,ll> ma;
    unordered_map<ll,ll> ml;
    vll x;
    rep(i,0,n){
        ll a,b;
        cin>>a>>b;
        ma[a]++;
        ml[b]++;
        x.push_back(a);
        x.push_back(b);
    }
    ll ans=INT_MIN;
    ll curr=0;
    sort(all(x));
    rep(i,0,2*n){
        if(ma[x[i]] && ml[x[i]]){
            continue;
        }
        else if(ma[x[i]]){
            curr++;
        }
        else{
            curr--;
        }
        ans=max(ans,curr);
    }
    cout<<ans<<endl;
    return 0;
}