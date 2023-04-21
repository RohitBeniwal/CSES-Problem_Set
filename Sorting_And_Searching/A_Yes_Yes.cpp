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
string a,b;
cin>>b;
a="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
ll blen=b.length();
ll alen=a.length();
if(blen>alen){
    no;
}
else{
    rep(i,0,alen-blen+1){
        string s=a.substr(i,blen);
        if(s==b){
            yes;
            return;
        }
    }
    no;
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