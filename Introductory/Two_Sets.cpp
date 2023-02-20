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
    ll x=n*(n+1)%4;
    if(x){
        cout<<"NO"<<endl;
    }
    else{
        ll y=n*(n+1)/4;
        vector<ll> v;
        map<ll,ll> mp;
        ll z=n;
        while(y){
           if(y<z){
            v.push_back(y);
            mp[y]++;
            y=0;
           } 
           else{
            v.push_back(z);
            mp[z]++;
            y-=z;
            z--;
           }
        }
        cout<<"YES"<<endl;
        ll sz=v.size();
        cout<<sz<<endl;
        rep(i,0,sz){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        cout<<n-sz<<endl;
        rep(i,1,n+1){
            if(!mp[i]){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}