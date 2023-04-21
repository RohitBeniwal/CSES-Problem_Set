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
    ll n,x;
    cin>>n>>x;
    vector<pll> v;
    rep(i,0,n){
        ll x;
        cin>>x;
        v.pb(mp(x,i));
    }
    sort(all(v));
    ll i=0;
    ll j=n-1;
    while(i<j){
        if((v[i].ff+v[j].ff)==x){
            cout<<v[i].ss+1<<" "<<v[j].ss+1<<endl;
            return 0;
        }
        else if((v[i].ff+v[j].ff)<x){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}