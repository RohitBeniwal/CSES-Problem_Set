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
    ll n,m;
    cin>>n>>m;
    multiset<ll> s;
    rep(i,0,n){
        ll x;
        cin>>x;
        s.insert(x);
    }
    rep(i,0,m){
        ll x;
        cin>>x;
        auto it=s.upper_bound(x);
        if(it==s.begin()){
            cout<<-1<<endl;
        }
        else{
            it--;
            cout<<*it<<endl;
            s.erase(it);
        }
    }
    
    return 0;
}