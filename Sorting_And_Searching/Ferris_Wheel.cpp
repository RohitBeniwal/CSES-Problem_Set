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
    vll v(n);
    rep(i,0,n){
        cin>>v[i];
    }
    sort(all(v));
    ll i=0;
    ll j=n-1;
    ll ans=0;
    while(i<j){
        if(v[j]>=x){
            ans++;
            j--;
        }
        else{
            if((v[j]+v[i])>x){
                ans++;
                j--;
            }
            else{
                ans++;
                j--;
                i++;
            }
        }
    }
    if(i==j && v[i]<=x) ans++;
    cout<<ans<<endl;
    return 0;
}