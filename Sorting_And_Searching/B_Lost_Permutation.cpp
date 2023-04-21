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
void solve(){
ll m,s;
cin>>m>>s;
ll mxx=0;
vll v(m);
rep(i,0,m){
    cin>>v[i];
    if(v[i]>mxx){
        mxx=v[i];
    }
}
vll b(mxx+1,0);
rep(i,0,m){
    b[v[i]]++;
}
ll sum=0;
rep(i,1,mxx+1){
    if(b[i]==0){
        sum+=i;
    }
}
if(sum>s){
    no;
}
else if(sum==s){
    yes;
}
else{
    mxx++;
    while(sum<s){
        sum+=mxx;
        mxx++;
    }
    if(sum==s) yes;
    else no;
}
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

ll T;
cin>>T;
while(T--){
solve();
}
    
    return 0;
}