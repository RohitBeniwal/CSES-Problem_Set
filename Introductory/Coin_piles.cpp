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
ll a,b;
cin>>a>>b;
if((a+b)%3){
    no;
}
else{
    if((a!=0 && b==0)|| (a==0 && b!=0)){
        no;
    }
    else if(a==0 && b==0){
        yes;
    }
    else{
        lld a1=max(a,b);
        lld b1=min(a,b);
        lld c=a1/b1;
        if(c<=2){
            yes;
        }
        else no;

    }
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