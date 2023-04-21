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
ll l,r,x,a,b;
cin>>l>>r>>x>>a>>b;
ll diff=abs(a-b);
ll ldiff1=abs(b-l);
ll ldiff2=abs(a-l);
ll rdiff1=abs(b-r);
ll rdiff2=abs(a-r);
if(diff==0){
    cout<<0<<endl;
}
else if(diff>=x){
    cout<<1<<endl;
}
else if((ldiff1>=x && ldiff2>=x) || (rdiff1>=x && rdiff2>=x)){
    cout<<2<<endl;
}
else if((ldiff1>=x || rdiff1>=x)&&(ldiff2>=x || rdiff2>=x)){
    cout<<3<<endl;
}
else{
    cout<<-1<<endl;
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